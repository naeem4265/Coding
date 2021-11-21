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

void solve(ll tc)
{
    ll i,j,n,m,k,t;
    cin >> n >> m >> t;
    k = n;
    ll l=0,r=0,ok=1;
    for(i=0; i<m; i++)
    {
        cin >> l;
        n = n-(l-r);
        cin >> r;
        if(n<=0) ok = 0;
        n += (r-l);        //cout <<n<<endl;
        n = min(n,k);
    }
    n -= (t-r);
    if(n<=0) ok=0;
    if(ok)
    {
        cout <<"Yes\n";
    }
    else
        cout <<"No\n";
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

