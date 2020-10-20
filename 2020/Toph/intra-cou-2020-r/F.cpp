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
ll ans,n;

bool vis[limit];
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

void rec(ll pos,ll l,ll ct)
{    //cout <<pos<<" "<<ct<<" "<<ans<<endl;
    if(pos>=n)
    {
        return ;
    }
    rec(pos+1,l,ct);
    if(ct==0)
        rec(pos+2,pos,ct+1);
    else if(vis[pos-l]==0)
    {
        if(vis[ct+1]==0)
            ans++;
        rec(pos+2,pos,ct+1);
       // cout <<pos<<" "<<l<<" "<<pos-l<<" "<<ct<<" "<<ans<<endl;
    }
}

void solve(ll t)
{
    ll i,j,m,k;
    ans = 0;
    scanf("%lld",&n);
    rec(0,-1,0);
    printf("%lld\n",ans);
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    seive();
    ll t,tt=1;
    scanf("%lld",&tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

