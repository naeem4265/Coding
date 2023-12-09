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

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n >> t;
    cin >> k;
    ll r = n;
    ll l = 1;
    ll ans = 0,sum;
    while(l<=r)
    {
        m = (l+r)/2;
        cout <<"? 1 "<<m<<endl;
        cin >> sum;
        ll zero = m-sum;
        if(zero >= k)
        {
            ans = m;
            r = m-1;
        }
        else
            l = m+1;
    }
    cout <<"! "<< ans << endl;
    cout.flush();
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
