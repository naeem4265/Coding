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
    ll i,j,n,m,k,b,d;

    string x,y;

    cin >> n >> m >> b;
    cin >> x >> y;

    vector<ll> v;
    ll carry = 0;
    for(i=x.size()-1, j=y.size()-1; i>=0 || j>=0; i--,j--)
    {
        if(i<0)
        {
            d = (y[j]-'0') + carry;
        }
        else if(j<0)
        {
            d = (x[i]-'0') + carry;
        }
        else
            d = (x[i]-'0') + (y[j]-'0') + carry;
        if(d >= b)
        {
            d = d-b;
            carry = 1;
        }
        else
            carry = 0;
        v.push_back(d);
    }
    if(carry)
        v.push_back(carry);

    for(i=v.size()-1; i>=0; i--)
        cout <<v[i];
    cout <<endl;
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

