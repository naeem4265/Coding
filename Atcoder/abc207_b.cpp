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
    ll i,j=0,n,m,k,a,b,c,d;
    string s;
    cin >> a >> b >> c >> d;
    ll temp = 0;
    while(j<limit)
    {
        if( (a)<=(temp*d))
        {
            cout << j << endl;
            return;
        }
        j++;
        a = a+b;
        temp += c;
    }
    cout << -1 << endl;
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
