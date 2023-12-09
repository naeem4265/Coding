#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;
vector<pair<ll,ll> > v;

void solve(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n;

    ll x,y;
    x = (-1+sqrt(1+8LL*n))/2LL;
    y = x*(x+1)/2LL;
    if(n==y)
    {
        cout <<"1 "<<x<<endl;
        return ;
    }
    x++;
    cout <<x-(n-y)+1<<" "<<(n-y)<<endl;

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
