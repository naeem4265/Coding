#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1008
using namespace std;
int type[limit],sz[limit],ct[15];
vector<int> g[limit];
bool vis[limit];
void solve(int t)
{
    int i,j,k,u,v,n,m;
    //cin >> n >> m;
    scanf("%d %d",&n,&m);
    for(i=0; i<limit; i++)
    {
        g[i].clear();
        type[i]=0;
        sz[i]=0;
        vis[i]=0;
        if(i<15)
            ct[i]=0;
    }
    for(i=1; i<=n; i++)
    {
        //cin >> type[i];
        scanf("%d",&type[i]);
        ct[type[i]]++;
    }
    for(i=1; i<n; i++)
    {
        //cin >> u >> v;
        scanf("%d %d",&u,&v);
        g[u].pb(v);
        g[v].pb(u);
        sz[u]++;
        sz[v]++;
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {    //cout <<i<<' '<<j<<' '<<sz[j]<<' '<<ct[type[j]]<<endl;
            if(vis[j]==0)
            if(ct[type[j]]>1 && sz[j]==1)
            {
                for(k=g[j].size()-1; k>=0; k--)
                {
                    v = g[j][k];
                    if(vis[v]==0 && ct[type[v]]>1)
                    {
                        sz[v]--;
                        vis[j] = 1;  //cout <<i<<' '<<j<<" done\n";
                        sz[j]=0;
                        ct[type[j]]--;
                    }
                }
            }
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {    //cout <<i<<' '<<j<<' '<<sz[j]<<' '<<ct[type[j]]<<endl;
            if(vis[j]==0)
            if(ct[type[j]]>1 && sz[j]==1)
            {
                vis[j] = 1;  //cout <<i<<' '<<j<<" done\n";
                sz[j]=0;
                ct[type[j]]--;
                for(k=g[j].size()-1; k>=0; k--)
                {
                    v = g[j][k];
                    if(vis[v]==0 && ct[type[v]]>1)
                    {
                        sz[v]--;
                    }
                }
            }
        }
    }
    int ans=0;
    for(i=1; i<=n; i++)
    {
        if(vis[i])
            ans++;  //cout <<i<<' '<<ans<<endl;
    }
    printf("Case %d: %d\n",t,ans);
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    //cin >> tt;
    scanf("%d",&tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
/*
1
7 5
1 2 4 3 1 3 5
1 2 2 3 3 4 4 5 3 6 6 7
*/

