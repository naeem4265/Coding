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
    ll i,j,n,m,k,x;
    string s;
    cin >> n >> k >> x;
    ll d[n+5];
    for(i=0; i<n; i++) cin >> d[i];
    sort(d,d+n);

    vector<ll> out;
    for(i=1; i<n; i++)
    {
        ll len = d[i]-d[i-1];
        if(len%x)
            len = len/x;
        else
            len = (len/x)-1;
        if(len>0)
        {
            out.pb(len); // cout <<len<<" ";
        }
    }
    if(out.size()) sort(out.begin(),out.end());
    for(i=0; i<out.size(); i++)
    {
        if(k < out[i])
        {
            cout << out.size()-i+1 << endl;
            return ;
        }
        k = k-out[i];
    }
    cout << 1 << endl;
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
