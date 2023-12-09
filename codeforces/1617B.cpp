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
    m = n;
    if(n&1)
    {
        for(i=3; ; i++)
        {
            m = n-i-1;
            ll x = __gcd(m,i);
            if(x==1)
            {
                cout <<i<<" "<<m<<" 1\n";
                return ;
            }
        }
    }
    else
        cout << 2 <<" "<<n-3 <<" 1\n";
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
