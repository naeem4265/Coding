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
#define limit 200008
using namespace std;
string s[limit];
ll n;
ll check(ll ct)
{
    vector<ll> v;
    ll x;
    for(ll i=0; i<n; i++)
    {
        ll m = s[i].size();
        x = 0;
        for(ll j=0; j<m; j++)
        {
            if(s[i][j]-'a'==ct) x++;
            else x--;
        }
        v.pb(x);
    }
    sort(v.begin(),v.end());
    x = 0;
    ct = 0;
    for(ll i=v.size()-1; i>=0; i--)
    {
        x += v[i];
        if(x>0) ct++;
        else
            break;
    }
    return ct;
}

void solve(ll t)
{
    ll i,j,m,k;
    cin >> n;
    for(i=0; i<n; i++)
        cin >> s[i];
    ll ans = 0;
    for(i=0; i<5; i++)
    {
        ans = max(ans,check(i));
    }
    cout << ans << endl;
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
