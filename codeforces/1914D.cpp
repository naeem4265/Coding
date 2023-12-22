#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    vector<pair<ll,ll> > a(n), b(n), c(n);
    for(i=0; i<n; i++ ) {
        cin >> a[i].first;
        a[i].second = i;
    }
    for(i=0; i<n; i++ ) {
        cin >> b[i].first;
        b[i].second = i;
    }
    for(i=0; i<n; i++ ) {
        cin >> c[i].first;
        c[i].second = i;
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    sort(b.begin(), b.end());
    reverse(b.begin(), b.end());

    sort(c.begin(), c.end());
    reverse(c.begin(), c.end());

    ll ans = 0;

    for( i=0; i<3; i++ ) {
        for(j=0; j<3; j++ ) {
            if( b[j].second == a[i].second )   continue;
            for(k=0; k<3; k++ ) {
                if( c[k].second == b[j].second || c[k].second == a[i].second )   continue;
                
                ans = max( ans, a[i].first + b[j].first + c[k].first );
            }
        }
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
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
