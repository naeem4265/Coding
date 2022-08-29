#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n >>q;
    vector<pair<ll,ll> >v(n);
    ll sum = 0;
    for(i=0; i<n; i++)
    {
        ll d;
        cin >> d;
        v[i].first = d;
        v[i].second = 0;
        sum += d;
    }
    ll last = 0,lastx = 0;
    for(k=1; k<=q; k++)
    {
        ll x,t;
        cin >> t;
        if(t==1)
        {
            cin >> i >> x;
            i--;
            if(v[i].second<last)
            {
                v[i].first = lastx;
            }
            sum += x-v[i].first;
            v[i].first = x;
            v[i].second = k;
        }
        else
        {
            cin >> x;
            sum = x*n;
            last = k;
            lastx = x;
        }
        cout << sum <<endl;
    }
    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
