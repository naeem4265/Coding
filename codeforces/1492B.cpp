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
    ll i,j,n,m,k;
    string s;
    cin >> n ;
    ll D[n+5];
    bool vis[n+5];
    memset(vis,0,sizeof(vis));
    for(i=1; i<=n; i++)
    {
        cin >> D[i];
        vis[i] = 0;
    }
    ll mx = n;
    vector<ll>ans;
    for(i=n; i>0; i--)
    {
        if(D[i]!=mx) continue;     //cout <<i<<" "<<ans.size()<<endl;
        for(j=i; j<=n; j++)
        {
            if(vis[D[j]]) break;
            ans.pb(D[j]);
            vis[D[j]]=1;
        }
        for(j=mx-1; j>0; j--)
        {
            if(vis[j]==0)
            {
                mx = j;
                break;
            }
        }
    }
    for(i=0; i<n; i++) cout <<ans[i]<<" "; cout <<endl;
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
