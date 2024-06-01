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

ll bs(ll k, ll a[], ll b[], ll d) {
    ll lo = 0, hi = k, m, lft ;
    while( lo <= hi ) {
        m = ( lo + hi )/2;
        if( d == a[m])    return b[m];
        if( d > a[m] ) {
            lft = m;
            lo = m+1;
        } else {
            hi = m-1;
        }
    }
    double temp = b[lft+1]-b[lft];
    double dis = a[lft+1] - a[lft];
    temp = temp/dis;
    dis = d - a[lft];
    temp = temp * dis;
    //cout << b[lft]<<" "<<lft<<" "<<temp<<endl;
    ll ans = b[lft] + temp;
    return ans;
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n >> k >> q ;
    ll a[k+5], b[k+5];
    a[0] = b[0] = 0;
    for( i=1; i<=k; i++ )   cin >> a[i];
    for( i=1; i<=k; i++ )   cin >> b[i];
    while( q-- ){
        ll d;
        cin >> d;
        cout << bs(k, a, b, d) <<" ";
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
