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

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n;

    ll ans = 0;
    vector<ll> neg, pos;
    neg.pb(0);
    pos.pb(0);

    for(i=0; i<n; i++)
    {
        cin >> m;
        if(m<0)
            neg.pb(m);
        else
            pos.pb(m);
        ans += abs(m);
    }

    sort(neg.begin(), neg.end());
    sort(pos.begin(), pos.end());
    reverse(pos.begin(),pos.end());

    m = (n+1)/2;
    for(i=m; i<neg.size(); i++)
        ans += 2*neg[i];

    m = n/2;
    for(i=m; i<pos.size(); i++)
        ans -= 2*pos[i];

    cout << ans << endl;

    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
