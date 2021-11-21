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

void solve(ll t)
{
    ll i=0,j,n,m,k;
    string s;
    cin >> n >> k;
    n -= k;
    if( n<=k || n==1)
    {
        cout << -1 << endl;
        return;
    }
    while(prime[i]*prime[i]<=n)
    {
        if(n%prime[i]==0)
        {
            if( (n/prime[i])>k )
                cout << n/prime[i] <<endl;
            else
                cout << -1 << endl;
            return ;
        }
        i++;
    }
    if( k==0 )
        cout << 1 <<endl;
    else
        cout << -1 << endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    seive();
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
