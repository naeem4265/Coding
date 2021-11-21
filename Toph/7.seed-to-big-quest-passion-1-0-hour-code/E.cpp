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
ll P(ll b,ll p)
{
    ll r=1;
    while(p)
    {
        if(p&1) r *= b;
        b = b*b;
        p = p/2;
    }
    return r;
}
void solve(int t)
{
    ll i,j,n,m,k,ans=0;
    cin >> n ;
    for(i=1; i<44; i++)
    {
        cout <<"1 "<<i<<endl;
        cin >> k;
        m = n-k;
        ans += m*P(2,i-1);
    }
    cout <<ans<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

