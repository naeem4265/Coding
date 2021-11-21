#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 400008
using namespace std;
int i,j,n,m;
int D[limit],nextmx[limit],nextmn[limit],premx[limit],premn[limit],dp[limit];
vector<int> g[limit];

int dfs(int u)
{
    if(u==n)
        return 0;
    if(dp[u]!=-1) return dp[u];
    int sz=g[u].size(),v,mn=Mod;
    for(int i=0; i<sz; i++)
    {
        v = g[u][i];     //cout <<i<<' '<<u<<" "<<v<<endl;
        mn = min(mn,1+dfs(v));
    }
    dp[u]=mn;   //cout <<u<<" "<<mn<<endl;
    return mn;
}

void solve(int t)
{
    cin >> n;
    for(i=1; i<=n; i++)
    {
        cin >> D[i];
    }
    for(i=0; i<n+5; i++)
    {
        nextmn[i]=nextmx[i]=premn[i]=premx[i]=0;
        dp[i]=-1;
    }
    stack<int> stk;
    int ind;
    for(i=1; i<=n; i++)
    {
        while(1)
        {
            if(stk.empty())
                break;
            ind = stk.top();
            if(D[ind]<D[i])
                break;
            nextmn[ind] = i;
            stk.pop();
        }
        stk.push(i);
    }
    while(!stk.empty())
        stk.pop();
    for(i=n; i>0; i--)
    {
        while(1)
        {
            if(stk.empty())
                break;
            ind = stk.top();
            if(D[ind]<D[i])
                break;
            stk.pop();
            nextmn[i] = max(nextmn[i],ind);
        }
        stk.push(i);    //cout<<i<<" "<<stk.size()<<endl;
    }
    while(!stk.empty())
        stk.pop();
    for(i=1; i<=n; i++)
    {
        while(1)
        {
            if(stk.empty())
                break;
            ind = stk.top();
            if(D[ind]>D[i])
                break;
            nextmx[ind] = i;
            stk.pop();
        }
        stk.push(i);
    }
    while(!stk.empty())
        stk.pop();
    for(i=n; i>0; i--)
    {
        while(1)
        {
            if(stk.empty())
                break;
            ind = stk.top();
            if(D[ind]>D[i])
                break;
            stk.pop();
            nextmx[i] = max(nextmx[i],ind);
        }
        stk.push(i);    //cout<<i<<" "<<stk.size()<<endl;
    }
    for(i=1; i<=n; i++)
    {
        g[i].pb(i+1);
        if(nextmx[i] && nextmx[i]>i+1)
            g[i].pb(nextmx[i]);
        if(nextmn[i] && nextmn[i]>i+1)
            g[i].pb(nextmn[i]);
    }
    for(i=1; i<n; i++)
        sort(g[i].begin(),g[i].end());
    cout <<dfs(1)<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

/*
19
5 6 7 10 5 3 6 2 11 3 2 10 4 8 15 7 8 9 8

*/
