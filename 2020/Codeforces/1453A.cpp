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

void solve(int t)
{
    int i,j,n,m,k,a,ct=0;
    cin >> n >> m;
    bool vis[105];
    memset(vis,0,sizeof(vis));
    for(i=0; i<n; i++)
    {
        cin >> a;
        vis[a]=1;
    }
    for(i=0; i<m; i++)
    {
        cin >> a;
        if(vis[a]) ct++;
    }
    cout <<ct<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

