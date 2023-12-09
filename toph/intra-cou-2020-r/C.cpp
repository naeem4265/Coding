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
#define limit2 17592123
using namespace std;
ll sod[limit],ssod[limit],mx;

bool vis[limit2];
ll prime[limit2];
void seive()
{
    vis[0]=vis[1]=1;
    for(ll i=4; i<limit2; i+=2) vis[i] = 1;
    for(ll i=3; i*i<limit2; i+=2)
    {
        if(vis[i]) continue;
        for(ll j=i*i; j<limit2; j+=2*i)
        {
            vis[j] = 1;
        }
    }
    prime[2] = 1;
    for(ll j=3; j<limit2; j++)
    {
        if(vis[j]==0)
        {
            prime[j] = prime[j-1]+1;
        }
        else
            prime[j] = prime[j-1];
    }
}

void pre()
{
    ll i,j;
    for(i=1; i<limit; i++)
    {
        for(j=i; j<limit; j+=i)
        {
            sod[j] += i;
            ssod[j] += sod[i];
        }
    }
}

void solve(ll t)
{
    ll i,j,n=t,m,k,ct=0;
    scanf("%lld",&n);
    ll l,r;
    l = sod[n];
    r = ssod[n];

    printf("Case %lld: %lld\n",t,prime[r]-prime[l-1]);
    //cout <<"Case "<<t<<": "<<ct<<endl;
    return ;
}
int  main()
{
 //   Fast
//    Freed
//    Fout
    pre();
    seive();
//    for(int i=0; i<100; i++)
//    {
//        cout <<i<<" "<<sod[i]<<" "<<ssod[i]<<" "<<prime[i]<<endl;
//    }
    ll t,tt=1;
    scanf("%lld",&tt);
    for(t=1; t<=tt; t++)
        solve(t);
    //cout <<mx<<endl;
    return 0;
}
