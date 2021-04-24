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
    cin >> n >> k;
    vector<char> v;
    for(i=0; i<k; i++)
    {
        v.pb(i+97);
        for(j=i+1; j<k; j++)
        {
            v.pb(i+97);
            v.pb(j+97);
        }
    }
    ll sz = v.size();
    for(i=0,j=0; i<n; i++)
    {
        cout <<v[j];
        j = (j+1)%sz;
    }
    cout <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
