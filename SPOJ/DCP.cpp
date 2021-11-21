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
    cin >> n >> m;
    if(m<n) swap(n,m);
    ll l = (n/3LL)+1, r =  m/3LL;
    l *= 3LL;
    r *= 3LL;
    ll even = (r-l)/3;
    ll odd = even*2;
    for(i=n; i<=l; i++)
    {
        if(i%3==1)
            even++;
        else
            odd++;
    }
    for(i=r+1; i<=m; i++)
    {
        if(i%3==1)
            even++;
        else
            odd++;
    }
    cout <<"Case "<<t<<":\n";
    cout <<"Odd = "<<odd<<"\n";
    cout <<"Even = "<<even<<"\n";


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
