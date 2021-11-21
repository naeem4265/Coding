#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1020
using namespace std;

bool vis[limit];
vector<ll>prime;
void seive()
{
    vis[0]=vis[1]=1;
    for(ll i=4; i<limit; i+=2) vis[i] = 1;
    for(ll i=3; i*i<limit; i+=2)
    {
        if(vis[i]) continue;
        for(ll j=i*i; j<limit; j+=2*i)
        {
            vis[j] = 1;
        }
    }
    prime.pb(2);
    for(ll j=3; j<limit; j+=2)
        if(vis[j]==0)
            prime.pb(j);
}

void solve(ll tc)
{
    ll i,j,n,m,k;

    cin >> n;
    ll D[n+5];
    vector<ll> v;

    for(i=0; i<n; i++)
    {
        cin >> m;
        for(j=0; prime[j]*prime[j]<=m; j++)
        {
            ll x=prime[j]*prime[j];
            while(m%x==0)
            {
                m/=x;
            }
        }
        v.pb(m);
    }
    v.pb(Mod);
    sort(v.begin(),v.end());
    ll l=0;
    m = v.size();
    ll mx=0,ct=0,one=0;
    for(i=1; i<m; i++)
    {
        if(v[i]!=v[l])
        {
            n = i-l;
            if(n%2==0)   ct+=n;
            else if(v[l]==1) one = n;

            mx = max(mx,n);
            l = i;
        }
    }
    cin >> m;
    for(i=1; i<=m; i++)
    {
        cin >> k;
        if(k==0)
            cout <<mx<<endl;
        else
            cout <<max(mx,ct+one)<<endl;
    }
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    seive();
    ll tc,tt=1;
    cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

