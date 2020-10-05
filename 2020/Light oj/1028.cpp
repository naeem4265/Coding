#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 10000008
using namespace std;
bool vis[limit];
vector<ll> prime;
void seive()
{
    ll i,j;
    for(i=3; i*i<limit; i+=2)
    {
        if(vis[i]==0)
        for(j=i*i; j<limit; j+=2*i)
            vis[j]=1;
    }
    prime.pb(2);
    for(i=3; i<limit; i+=2)
        if(vis[i]==0)
            prime.pb(i);
}
void solve(ll t)
{
    ll a,k,i,j,n,mx=0,ct=1,ans=1;
    cin >> n;
    for(i=0; prime[i]*prime[i]<=n+1; i++)
    {
        ct = 0;
        while(n%prime[i]==0)
        {
            n/=prime[i];
            ct++;
        }
        ans *= (ct+1);
    }
    if(n>1)
        ans *= (2);
    cout <<"Case "<<t<<": "<<ans-1<<endl;
}
int  main()
{
    Fast
//    Freed
//    Fout
    seive();
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}


