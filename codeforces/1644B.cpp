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

bool vis[55];
ll ans[55],n,ct;

void permutation(ll i)
{
    if(ct>=n) return ;
    if(i>n)
    {
        for(ll j=1; j<=n; j++)
            cout <<ans[j]<<" ";
        cout <<endl;
        ct++;
        return ;
    }
    for(ll j=1; j<=n; j++)
    {
        if(i>2 && (ans[i-2]+ans[i-1])==j)  continue;
        if(vis[j]==0)
        {
            ans[i] = j;
            vis[j] = 1;
            permutation(i+1);
            vis[j] = 0;
        }
    }
}

void solve(ll tt)
{

    cin >> n;
    memset(vis, 0 ,sizeof(vis));
    ct = 0;

    permutation(1);

    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
