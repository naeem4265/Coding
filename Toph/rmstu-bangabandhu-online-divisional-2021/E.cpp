#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n;
    ll d[n+5][2];
    for(i=0; i<n; i++)
    {
        cin >> d[i][0] >> d[i][1];
        if(d[i][0] > d[i][1]) swap(d[i][0],d[i][1]);
    }
    ll ans = 0;
    for(i=0; i<=n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(d[j][0] == d[j][1])
            {
                cout << ans << endl;
                return ;
            }
        }
        ll temp = d[n-1][1];
        for(j=n-1; j>0; j--)
        {
            d[j][1] = d[j-1][1];
            if(d[j][0] > d[j][1]) swap(d[j][0],d[j][1]);
        }
        d[0][1] = temp;
        if(d[0][0] > d[0][1]) swap(d[0][0],d[0][1]);
        ans++;
    }
    cout << -1 <<endl;
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
