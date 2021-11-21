#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e16
#define Mod 1000000007
#define limit 2008
using namespace std;

vector<ll> v;

void solve(ll tt)
{
    ll i,j,k,n,m;
    string s,t;
    cin >> s;
    ll ans = 11;
    for(i=0; i<60; i++)
    {
        t = to_string(v[i]);
        for(j=0,k=0; j<t.size() && k<s.size(); k++)
        {
            if(t[j]==s[k])
                j++;
        }
        ll cost = t.size()-j+s.size()-j;
        ans = min(ans, cost);
    }
    cout << ans <<endl;

    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t=1,tt=1;
    for(t=0; t<60; t++)
    {
        v.pb(tt);
        tt *= 2LL;
    }
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
