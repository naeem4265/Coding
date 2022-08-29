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
    cin >> n;
    ll d[n+5];
    for(i=0; i<n; i++)
    {
        cin >> d[i];
    }
    if(n&1)
    {
        cout <<"NO\n";
        return ;
    }
    sort(d, d+n);
    vector<ll> v;
    for(i=0, j=n/2; j<n; i++,j++)
    {
        v.pb(d[i]);
        v.pb(d[j]);
    }
    for(i=0; i<n; i++)
    {
        j = (i-1+n)%n;
        k = (i+1)%n;    //cout <<i<<" "<<v[j]<<" "<<v[i]<<" "<<v[k]<<endl;
        if(v[i]==v[j] || v[k]==v[i] || (v[j]<=v[i] && v[k]>=v[i]) || (v[j]>=v[i] && v[k]<=v[i]))
        {
            cout <<"NO\n";
            return ;
        }
    }
    cout <<"YES\n";
    for(i=0; i<n; i++)
        cout <<v[i]<<" ";
    cout <<endl;
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
        solve(t);
    return 0;
}
