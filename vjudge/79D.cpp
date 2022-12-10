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
    cin >> n >> m >> k;
    ll d[n+5];
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
    }
    ll ans = d[n]-d[1]+1;
    vector<ll> v;
    for(i=2; i<=n; i++)
    {
        v.pb(d[i]-d[i-1]-1);
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    m = v.size();
    k--;
    for(i=0; i<min(m,k); i++)
    {
        ans -= max(0LL, v[i]);
    }
    cout << ans <<endl;

    return ;
}


int  main()
{
    Fast
    ll t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

