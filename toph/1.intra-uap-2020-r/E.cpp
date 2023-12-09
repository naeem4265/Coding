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
vector<int> g[limit];
int ck=0;
void dfs(int p,int u)
{
    if(ck) return ;
    int v,x,y,i;
    int sz=g[u].size();  // cout <<u<<" "<<sz<<endl;
    if(sz==1 && g[u][0]==p)
    {
        cout <<"! "<<u<<endl;
        ck=1;
        return ;
    }
    if(sz==1)
    {
        dfs(u,g[u][0]);
        return ;
    }
    cout <<"? "<<u<<endl<<flush;
    cin >> x;
    if(x==0)
    {
        cout <<"! "<<u<<endl;
        ck=1;
        return ;
    }
    else
    {
        for(i=0; i<sz; i++)
        {
            if(ck) return ;
            v = g[u][i];
            if(v==p) continue;
            cout <<"? "<<v<<endl<<flush;
            cin >> y;
            if(y<x)
            {
                dfs(u,v);
                break;
            }
        }
    }
    if(ck)
        return ;
}
void solve(int t)
{
    int i,j,k,u,v,n;
    cin >> n;
    for(i=1; i<n ;i++)
    {
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    dfs(0,1);
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    int t,tt=1;
  //  cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}
/*
4
1 2
1 3
1 4
1
2
0
*/


