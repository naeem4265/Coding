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
    cin >> n;
    ll d[n+5];
    bool vis[n+5];
    memset(vis,0,sizeof(vis));
    for(i=0; i<n; i++)
        cin >> d[i];
    ll ans = 0;
    k = n;
    ll mn = n;
    for(i=n-1; i>=0 && k; i--)
    {
        vis[d[i]]=1;
        if(d[i]==k)
        {
            while(k && vis[k])   k--;
        }
        else
        {
            vis[d[i]] = 1;
            mn = min(mn, d[i]);
        }
        if(k<mn)
        {
            ans++;
            mn = k;
        }
    }
    cout << ans <<endl;
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
