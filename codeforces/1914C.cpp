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
    cin >> n >> k;
    vector< pair<ll,ll> > v(n);

    for(i=0; i<n; i++ )  cin >> v[i].first;
    for(i=0; i<n; i++)   cin >> v[i].second;

    ll idx = 0;
    for(i=0; i<n; i++ ) {
        if(  v[i].second > v[idx].second )    idx = i;
    }
    
    ll ans = 0,mx = 0, sum = 0;
    for( i=0; i<min(n,k); i++ ) {

        sum += v[i].first ;
        mx = max( mx, v[i].second );
        ans = max(ans, sum+(max(0LL, k-i-1))*mx);    //cout <<i<<" "<<j<<" "<<mx<<" "<<sum<<" "<<ans<<endl;
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
