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
    cin >> n >> k;
    ll d[35];
    memset(d,0,sizeof(d));

    for(i=0; i<n; i++)
    {
        cin >> m;
        for(j=0,k=1; j<30; j++)
        {
            if( m&k )
                d[j]++;
            k = k<<1;
        }
    }
    ll ans = 0;
    for(i=0,k=1; i<30; i++)
    {
        m = d[i];
        if( d[i]>(n-d[i]))
            ans += k;     //cout <<i<<" "<<d[i]<<" "<<n-d[i]<<" "<<k<<" "<<ans<<endl;
        k = k<<1;
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
