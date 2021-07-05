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
    ll i,j,n,m,k,x,y;
    string s;
    cin >> n;
    ll t[n+5],l[n+5],r[n+5];
    for(i=0; i<n; i++)
    {
        cin >> t[i] >> l[i] >> r[i] ;
    }
    ll ans = 0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<i; j++)
        {
            if(l[i]>r[j] || r[i]<l[j]) continue;
            if(r[i]==l[j] && ((t[i]==2||t[i]==4) || t[j]>2)) continue;
            if(l[i]==r[j] && (t[i]>2 || (t[j]==2||t[j]==4))) continue;
            ans++;
        }
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
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
