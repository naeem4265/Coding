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


void Please_AC(ll tt, bool s)
{
    ll i,j,n,m,k,q;
    
    cin >> n;
    vector<ll> a(n);
    for(i=0; i<n; i++)   cin >> a[i];

    sort( a.begin(), a.end() );
    ll ans = 0;
    if(s==0 ) {
        m = n/2;
        if( n&1 )  i=0;
        else i = 1;
        for( ; i<=m; i++)   ans += a[i];
        cout << ans  <<endl;
        return;
    }
    reverse(a.begin(),  a.end());
    ll csum[n+5];
    csum[0] = a[0];
    for(i=1; i<n; i++)   csum[i] = csum[i-1]+a[i];
    
    ans = a[0];
    for(i=1; i<n; i++ ) {
        ll sum = 0;
        
        k = min( n-1, i+i );
        sum = csum[k] - csum[i-1];
        if( ans < sum )  ans = sum;
        continue;


        sum -= csum[i-1];
        for(j=i, k=0; j<n && k<=i; j++, k++ ) {
            sum += a[j];
        }
        if( sum> ans)  ans = sum;
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
    bool s;
    cin >> s;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t, s);
    }
    return 0;
}
