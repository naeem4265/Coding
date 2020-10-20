#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;
ll ct[limit];


bool vis[limit];
ll prime[limit];
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
}
ll bigmod(ll b,ll p)
{
    ll ans=1;
    while(p)
    {
        if(p&1)
            ans = (ans*b)%Mod;
        b = (b*b)%Mod;
        p = p/2;
    }
    return ans;
}
void pre()
{
    ct[0]=0;
    for(int i=1; i<limit; i++)
    {
        if(vis[i]==0)
            ct[i] = (ct[i-1]+1)%Mod;
        else
            ct[i] = (ct[i-1]+bigmod(2,i))%Mod;   //cout <<ct[i]<<endl;
    }
}

void solve(int t)
{
    int i,j,n,m,k;
    cin >> n ;
    cout <<ct[n]<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    seive();
    pre();
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

