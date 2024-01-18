#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 2e5+5;
const ll Mod = 1e9+7;
using namespace std;
const ll mx = 300;
ll csum[limit][mx], sum[limit][mx];

void Please_AC(ll tt)
{
    ll i,j,n,q;
    cin >> n >> q;
    ll a[n+5];
    for( i=1; i<=n; i++ ) {
        cin >> a[i];
    }
    
    for( i=n; i>0; i-- ) {
        for( j= 1; j<mx; j++ ) {
            sum[i][j] = sum[i+j][j] + a[i];
            csum[i][j] = csum[i+j][j] + sum[i+j][j] + a[i] ;
        }
    }

    while( q-- ) {
        ll s, d, k, ans = 0;
        cin >> s >> d >> k;
        if( d >= mx ) {
            for( i=s,j=1; j<=k && i<=n; j++, i+=d ) {
                ans += a[i]*j;
            }
            cout << ans <<" ";
            continue;
        }
        ans = csum[s][d] - csum[s + d*k ][d] - sum[s + d*k ][d]*k;
        cout << ans <<" ";
    }
    cout <<endl;

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
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
