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

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll d[n+5];
    for(i=0; i<n; i++)
        cin >> d[i];
    for(i=0,j=n-1; i<j; i++,j--)
    {
        if(d[i]!=d[j])
        {
            vector<ll> v;
            for(k=0; k<n; k++)
            {
                if(d[k]==d[i]) continue;
                v.pb(d[k]);
            }
            ll sz=v.size();
            ll l;
            for(k=0,l=sz-1; k<l; k++,l--)
            {
                if(v[k]!=v[l]) break;
            }
            if(k>=l)
            {
                cout <<"YES\n";
                return ;
            }
            v.clear();
            for(k=0; k<n; k++)
            {
                if(d[k]==d[j]) continue;
                v.pb(d[k]);
            }
            sz=v.size();
            for(k=0,l=sz-1; k<l; k++,l--)
            {
                if(v[k]!=v[l]) break;
            }
            if(k>=l)
            {
                cout <<"YES\n";
                return ;
            }
            cout <<"NO\n";
            return ;
        }
    }
    cout <<"YES\n";
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
