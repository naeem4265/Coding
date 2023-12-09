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
    ll l,r;
    cin >> l >> r >> k;
    if(l==1 && r==1)
    {
        cout <<"NO\n";
        return ;
    }
    if(l==1)
    {
        k--;
        l++;
    }
    n = (r-l+1)/2;
    if(l&1 && r&1 && l!=r)  n++;
    k -= n;
    if(k<0)
    {
        cout <<"NO\n";
    }
    else
    {
        cout <<"YES\n";
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

