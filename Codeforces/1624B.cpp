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
    ll a,b,c,d;
    cin >> a >> b >> c;
    d = c-b;
    m = b-d;
    if(m==a)
    {
        cout <<"YES\n";
        return ;
    }
    if(m>0 && m%a==0)
    {
        cout <<"YES\n";
        return ;
    }
    d = c-a;
    if(d%2==0 && (a+(d/2))%b==0)
    {
        cout <<"YES\n";
        return ;
    }
    d = a-b;
    m = b-d;
    if( m>0 && m%c==0 )
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
