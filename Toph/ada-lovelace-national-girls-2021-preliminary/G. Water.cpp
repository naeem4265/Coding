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
    ll a,b,c;
    cin >> n >> a >> b >> c;

    ll ct=0;
    for(i=0; i<=c; i++)
    {
        m = n-2LL*i;
        if(m<0) break;
        for(j=0; j<=b; j++)
        {
            m = n-2LL*i-j;
            if(m<0) break;
            if((2LL*m)<=a) ct++;
        }
    }
    cout << ct <<endl;
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
