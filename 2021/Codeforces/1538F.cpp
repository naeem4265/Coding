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

ll cnt(ll x)
{
    ll ans = x;
    for(ll l=10; l<=Mod; l*=10)
    {
        ans += x/l;
    }
    return ans;
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    ll l,r,lr,rr;
    cin >> l >> r;
    lr = cnt(l);
    rr = cnt(r);               //cout <<lr <<' '<<rr<<endl;
    cout << rr-lr << endl;
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
