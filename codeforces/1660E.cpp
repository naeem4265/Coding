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
    string d[n+5];
    ll one = 0, ct=0;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        for(j=0; j<n; j++)
        {
            if(d[i][j]=='1')
                one++;
        }
    }

    ll ans = n*n;
    for(i=0; i<n; i++)
    {
        ct = 0;
        for(j=0, k=i; j<n; j++, k++)
        {
            if(k==n)
                k = 0;
            if(d[j][k]=='1')
                ct++;
        }
        ans = min(ans, one-ct+n-ct);
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
