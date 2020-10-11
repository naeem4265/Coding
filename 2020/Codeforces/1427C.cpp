#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 100008
using namespace std;
ll n,ct[limit];
bool vis[limit];
struct stc
{
    ll t,x,y;
};
//bool operator<(stc &A,stc &B)
//{
//    return (A.t<B.t);
//}
stc point[limit];

void dfs(ll pos)
{
    for(ll i=pos+1; i<=n; i++)
    {
        if(point[i].t>=(abs(point[pos].x-point[i].x)+abs(point[pos].y-point[i].y)+point[pos].t))
        {
            if(vis[i]==0)
            {
                vis[i] = 1;
                dfs(i);
                ct[pos] = max(ct[pos],ct[i]+1);
            }
            else
            {
                ct[pos] = max(ct[pos],ct[i]+1);
            }
            //cout <<pos<<" "<<i<<" "<<ct[pos]<<" "<<ct[i]<<" here\n";
        }
    }
    ct[pos] = max(ct[pos],1LL);
}
void solve(ll t)
{
    ll i,m,k,r,x,y;
    cin >> r >> n ;
    point[0].t=0;
    point[0].x=1;
    point[0].y=1;
    for(i=1; i<=n; i++)
    {
        cin >> t >> x >> y;
        point[i].t=t;
        point[i].x=x;
        point[i].y=y;
    }
    //sort(point,point+n+1);
    for(i=1; i<=n; i++)
    {    //cout <<point[i].t<<" iii "<<(max(0LL,abs(point[0].x-point[i].x)-1)+max(0LL,abs(point[0].y-point[i].y)-1)+point[0].t)<<endl;
        if(point[i].t>=(abs(point[0].x-point[i].x)+abs(point[0].y-point[i].y)+point[0].t))
        {
            if(vis[i]==0)
                dfs(i);
            ct[0] = max(ct[0],ct[i]);    //cout <<i<<" "<<ct[0]<<" "<<ct[i]<<endl;
        }
        vis[i] = 1;
    }
    cout <<ct[0]<<endl;
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

