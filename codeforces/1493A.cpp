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

void solve(int t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n >> k;
    m = ceil(k/2.00);
    vector<ll> v;
    for(i=m; i<k; i++) v.pb(i);
    for(i=k+1; i<=n; i++) v.pb(i);
    n = v.size();
    cout <<n<<endl;
    for(i=0; i<n; i++) cout <<v[i]<<" ";
    if(n)
        cout <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
