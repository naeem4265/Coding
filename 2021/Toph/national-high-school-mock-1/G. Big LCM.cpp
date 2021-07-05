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

ll bigmod(ll b,ll p)
{
    ll ans=1;
    while(p)
    {
        if(p&1)
            ans = (ans*b);
        b = (b*b);
        p = p/2;
    }
    return ans;
}

void solve(ll t)
{
    ll i,j,n,m,k;
    ll a,b,c;
    cin >> a >> b >> c;
    k = c;
    n = 1;
    while(1)
    {
        m = c*k;
        if(m > b || m<2LL) break;
        n++;
        c = m;
    }
    while(n>0)
    {
        ll x,y,z;
        x = bigmod(k,n);
        y = b/x;
        z = a/x;
        if(a%x==0) z--;
        if((y-z)>0)
        {
            cout << n << endl;
            return ;
        }
        n--;
    }
    cout << 0 << endl;
    return;
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
