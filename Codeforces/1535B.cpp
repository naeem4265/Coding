#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n;
    vector<ll> odd,even;
    odd.pb(0);
    even.pb(0);
    for(i=0; i<n; i++)
    {
        cin >> m;
        if(m&1) odd.pb(m);
        else even.pb(m);
    }
    sort(odd.begin(),odd.end());
    reverse(odd.begin(),odd.end());
    sort(even.begin(),even.end());
    reverse(even.begin(),even.end());
    ll ans = (even.size()-1)*(odd.size()-1);
    for(i=0; i<odd.size()-1; i++)
    {
        for(j=i+1; j<odd.size()-1; j++)
        {
            if(__gcd(odd[i],2*odd[j])>1)
                ans++;
        }
    }
    for(i=0; i<even.size()-1; i++)
    {
        for(j=i+1; j<even.size()-1; j++)
        {
            if(__gcd(even[i],2*even[j])>1)
                ans++;
        }
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
