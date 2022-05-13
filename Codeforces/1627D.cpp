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
ll ct[limit];
bool ok[limit];

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    memset(vis,0,sizeof(vis));
    memset(ct,0,sizeof(ct));
    scanf("%lld", &n);
    ll g = 0;
    for(i=0; i<n; i++)
    {
        scanf("%lld", &m);
        g = __gcd(m,g);
        vis[m] = 1;
    }
    ll ans = 0;

    if(g==1 && vis[1]==0)  ans++;   //cout <<ans <<endl;
    for(i=limit-1; i>1; i--)
    {
        ll ace = 0;
        for(j=i; j<limit; j+=i)
        {
            if(vis[j])
            {
                ct[i]++;
                if(ct[i]>1) ace = 1;
//                if(mx<ct[i]) mx = ct[i];
//                if(ct[i]>1)
//                {
//                    ace = 1;   //cout <<i<<" "<<ct[i]<<" "<<j<<endl;
//                }
            }
        }

        for(j=i+i; j<limit; j+=i)
        {
            if(vis[i] || ct[i]<=ct[j])
            {
                ace = 0;
                break;
            }
        }
        if(ace)
        {
            ans++;
            //cout <<i<<" "<<ct[i]<<" "<<ans<<endl;
        }
    }
    printf("%lld\n",ans);
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
