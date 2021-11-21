#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll t)
{
    ll i,j,n,m,k;
    cin >> n ;
    vector<ll> v,c,out;

    for(i=0; i<n; i++)
    {
        ll a;
        cin >> a;
        v.pb(a);
    }
    sort(v.begin(),v.end());

    //for(i=0; i<n; i++) cout <<v[i]<<" ";cout <<endl;

    for(i=0; i<n; )
    {
        for(j=i+1; j<n; j++)
        {
            if(v[i]!=v[j]) break;
        }
        ll x = j-i;
        c.pb(x);
        i=j;
    }
    sort(c.begin(),c.end());
    m = n;
    n = c.size();

    //for(i=0; i<n; i++) cout <<c[i]<<" ";cout <<endl;


    ll ans = 0;
    for(i=n-1; i>=0; i--)
    {
        ll x = c[i]*(n-i);       //cout <<i<<" "<<x<<endl;
        ans = max(ans,x);
    }
    cout << m-ans <<endl;
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
