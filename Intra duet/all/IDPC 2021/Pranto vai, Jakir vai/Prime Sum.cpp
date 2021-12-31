#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

ll cum[limit];
bool vis[limit];
vector<int>prime;
void seive()
{
    vis[0]=vis[1]=1;
    for(int i=4; i<limit; i+=2) vis[i] = 1;
    for(int i=3; i*i<limit; i+=2)
    {
        if(vis[i]) continue;
        for(int j=i*i; j<limit; j+=2*i)
        {
            vis[j] = 1;
        }
    }

    //prime.pb(0);
    prime.pb(2);
    for(int j=3; j<limit; j+=2)
        if(vis[j]==0)
            prime.pb(j);
    cum[0] = 2;
    for(int i=1; i<prime.size(); i++)
    {
        cum[i] = prime[i]+cum[i-1];  //cout <<i<<" "<<cum[i-1]<<" "<<prime[i]<<" "<<cum[i]<<endl;
    }
}

ll bsu(ll key)
{
    ll l=0,h=prime.size()-1,m,idx=-1;
    while(l<=h)
    {
        m = (l+h)/2;
        if( key <= prime[m])
        {
            h = m-1;
            idx = m;
        }
        else
            l = m+1;
    }
    return idx;
}
ll bsd(ll key)
{
    ll l=0,h=prime.size()-1,m,idx=-1;
    while(l<=h)
    {
        m = (l+h)/2;
        if( key >= prime[m])
        {
            l = m+1;
            idx = m;
        }
        else
        {
            h = m-1;
        }
    }
    return idx;
}

void solve(ll t)
{
    ll i,j,n,m,k;
    ll a,b;
    cin >> a >> b;
    ll ans=0;

    ll l,r;
    l = bsu(a);
    r = bsd(b);

    ans = cum[r] - cum[l-1];
    cout << ans << endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
   // Fout
    seive();
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}


