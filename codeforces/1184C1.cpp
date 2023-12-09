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

void solve(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n;
    ll x[4*n+5], y[4*n+5];
    for(i=0; i<=4*n; i++)
        cin >> x[i] >> y[i];

    bool vis[55][55];
    memset(vis, 0, sizeof(vis));

    ll ct=0,l,r,u,d;
    for(l=0; l<50; l++)
    {
        for(j=0; j<=4*n; j++)
        {
            if(x[j]==l)
                ct++;
        }
        if(ct>=n)
            break;
    }
    ct=0;
    for(r=50; r>0; r--)
    {
        for(j=0; j<=4*n; j++)
        {
            if(x[j]==r)
                ct++;
        }
        if(ct>=n)
            break;
    }
    ct=0;
    for(u=0; u<50; u++)
    {
        for(j=0; j<=4*n; j++)
        {
            if(y[j]==u)
                ct++;
        }
        if(ct>=n)
            break;
    }
    ct=0;
    for(d=50; d>0; d--)
    {
        for(j=0; j<=4*n; j++)
        {
            if(y[j]==d)
                ct++;
        }
        if(ct>=n)
            break;
    }      //cout <<l<<" "<<r<<" "<<u<<" "<<d<<endl;
    for(i=0; i<=4*n; i++)
    {
        if((x[i]==l || x[i]==r) && y[i]>=u && y[i]<=d)
            continue;
        if((y[i]==u || y[i]==d) && x[i]>=l && x[i]<=r)
            continue;
        cout <<x[i]<<" "<<y[i]<<endl;
        return ;
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
