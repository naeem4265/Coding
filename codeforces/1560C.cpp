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
    ll i,j,n,m,k;
    string s;
    cin >> n;
    m = ceil(sqrt(1.00*n));

    n -= (m-1)*(m-1);
    if(m*m==n)
    {
        cout <<m<<" "<<1<<endl;
        return ;
    }

    if(n>m)
    {
        n -= m;
        cout <<m<<" "<<m-n<<endl;
    }
    else
    {
        cout <<n<<" "<<m<<endl;
    }
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
