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
    n = prime.size();
    ll ct[limit+5],sq[limit+5];
    for(i=0; i<n; i++)
    {
        ct[prime[i]] = 0;
        sq[prime[i]] = 0;
    }
    cin >> n;
    ll D[n+5];
    for(i=0; i<n; i++)
    {
        cin >> D[i];
    }
    vector<ll> v;
    v.pb(0);
    ll mx=0;
    for(i=0; i<n; i++)
    {
        m = D[i];
        ll ok=1;
        vector<ll>temp;
        temp.clear();
        for(j=0; prime[j]*prime[j]<=m; j++)
        {
            ll x=0;
            while(m%prime[j]==0)
            {
                x++;
                m/=prime[j];
            }
            if(x&1)
            {
                ok = ok*prime[j];
            }
            else if(x)
                temp.pb(prime[j]);
        }
        if(m>1) ok = ok*m;
        if(ok>1)
        {
            v.pb(ok);
        }
        else
        {
            m = temp.size();
            for(j=0; j<m; j++)
            {
                sq[temp[j]]++;
                mx = max(mx,sq[temp[j]]);
            }
        }
    }
    v.pb(Mod);
    m = v.size();
    sort(v.begin(),v.end());
    ll l=0;
    for(i=1; i<m; i++)
    {
        if(v[i]!=v[l])
        {
            mx = max(mx,i-l);
            l = i;
        }
    }
    cin >> m;
    for(i=0; i<m; i++)
    {
        cin >> k;
        cout <<mx<<endl;
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    seive();
    ll tc,tt=1;
    cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

