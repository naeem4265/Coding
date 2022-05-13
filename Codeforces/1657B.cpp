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
    ll b,x,y;
    cin >> n >> b >> x >> y;
    ll sum = 0,pre=0;
    for(i=1; i<=n; i++)
    {
        if((pre+x)<=b)
        {
            pre = pre+x;
            sum += pre;
        }
        else
        {
            pre -= y;
            sum += pre;
        }
    }
    cout << sum <<endl;

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
