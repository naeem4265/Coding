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

void solve(ll t)
{
    ll i,j,n,m,k;
    cin >> n;

    ll vis[2*n+5];
    memset(vis,-1,sizeof(vis));
    ll a[n+5],b[n+5];
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(i=0; i<n; i++)
    {
        cin >> b[i];
        j = b[i];

        while( j && vis[j] == -1)
        {
            vis[j] = i;
            j--;
        }
    }

    ll ans = Mod;
    for(i=0; i<n; i++)
    {           //cout <<i<<" "<<vis[a[i]+1]<<" "<<ans<<endl;
        ans = min(ans, i+vis[a[i]+1]);
    }
    cout << ans << endl;

    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
