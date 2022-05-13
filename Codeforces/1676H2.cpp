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
    vector<ll> v(n);
    vector<ll>::iterator it ;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        v[i] = d[i];
    }
    sort(v.begin(), v.end());
    ll ans = 0,mx=0,ct=0;
    for(i=0; i<n; i++)
    {
        if(d[i]<mx)
        {
            ct++;
            continue;
        }
        mx = d[i];
        it = upper_bound(v.begin(), v.end(), mx);
        ans += (it-v.begin()-1)-ct;  //cout <<i<<" "<<it-v.begin()-1<<" "<<ct<<" "<<ans<<endl;
        ct++;
    }
    cout << ans <<endl;
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
