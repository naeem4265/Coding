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
    cin >> n ;
    ll a[n+5];
    for( i=0; i<n; i++ )   cin >> a[i];
    map<pair<ll,ll>, ll > first_second, second_third, first_third;
    map<pair<pair<ll,ll>, ll>, ll> first_second_third;
    for(i=1; i<n-1; i++)  {
        first_second[{a[i-1], a[i]}]++;
        second_third[{a[i], a[i+1]}]++;
        first_third[{a[i-1], a[i+1]}]++;
        first_second_third[{{a[i-1], a[i]}, a[i+1]}]++;
    }
    ll ans = 0;
    for(i=1; i<n-1; i++)  {
        ans += first_second[{a[i-1], a[i]}];    //cout <<i<<" "<<ans<<' ';
        ans += second_third[{a[i], a[i+1]}];     //cout <<ans<<' ';
        ans += first_third[{a[i-1], a[i+1]}];      //cout <<ans<<' ';
        ans -= 3LL*first_second_third[{{a[i-1], a[i]}, a[i+1]}];   //cout <<ans<<endl;
        first_second[{a[i-1], a[i]}]--;
        second_third[{a[i], a[i+1]}]--;
        first_third[{a[i-1], a[i+1]}]--;
        first_second_third[{{a[i-1], a[i]}, a[i+1]}]--;
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
