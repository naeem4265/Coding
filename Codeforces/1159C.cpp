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
    string s;
    cin >> n >> m;
    ll b[n+5],g[m+5];
    for(i=0; i<n; i++)
    {
        cin >> b[i];
    }
    for(i=0; i<m; i++)
    {
        cin >> g[i];
    }
    sort(b,b+n);
    sort(g,g+m);
    if(g[0]<b[n-1])
    {
        cout <<-1<<endl;
        return ;
    }
    ll ans = 0;
    for(i=n-1,j=m-1; i>=0; i--)
    {
        while(j>=0 && g[j]>=b[i])
        {
            ans += (g[j]-b[i]);
            j--;
            if(i==(n-1) && j==0 && g[j]>b[i])  break;
        }
        ans += b[i]*m;
    }
    cout << ans <<endl;
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
