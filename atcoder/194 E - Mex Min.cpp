#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 2000008
using namespace std;
ll D[limit],ct[limit];

void solve(int t)
{
    ll i,j,n,m,k;
    cin >> n >> m;
    for(i=0; i<=n+5; i++)
    {
        ct[i] = 0;
    }

    for(i=0; i<n; i++) cin >> D[i];

    for(i=0; i<m; i++)
    {
        ct[D[i]]++;
    }
    ll ans = m;
    for(i=0; i<m; i++)
    {
        if(ct[i]==0)
        {
            ans = i;
            break;
        }
    }
    for(i=m; i<n; i++)
    {
        if(D[i]==D[i-m]) continue;
        ct[D[i-m]]--;
        ct[D[i]]++;
        if(ct[D[i-m]]==0)
            ans = min(ans,D[i-m]);
    }
    cout << ans <<endl;
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
