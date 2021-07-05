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
    string s;
    cin >> n;
    vector<ll> v;
    for(i=0; i<n; i++){
        cin >> m;
        v.pb(m);
    }
    sort(v.begin(),v.end());
    if(v[0]<0)
    {
        cout <<"NO\n";
        return ;
    }
    cout <<"YEs\n";
    cout << v[n-1]+1 << endl;
    for(i=0; i<=v[n-1]; i++)
    {
        cout <<i<<' ';
    }
    cout << endl;
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
