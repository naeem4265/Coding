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
    ll a,b,x;

    cin >> a >> b >> x;
    if(a<b) swap(a,b);
    if(x>a)
    {
        cout <<"NO\n";
        return ;
    }
    ll d;
    while(b)
    {
        m = a%b;
        d = a-b;

        if( a!=b )
        {
            k = a%d;
            if(x==a || x==b || (x-k)%b==0 || (x-k)%a==0)
            {
                cout <<"YES\n";
                return ;
            }
        }
        if(x==a || x==b || (x-m)%b==0 || (x-m)%a==0)
        {
            cout <<"YES\n";
            return ;
        }
        a = b;
        b = m;
        if(a<b)   swap(a,b);
    }
        m = a%b;
        if(x==a || x==b)
        {
            cout <<"YES\n";
            return ;
        }
    cout <<"NO\n";
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
