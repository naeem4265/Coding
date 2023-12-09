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
    ll hc, dc, hm, dm, w, a,hhc, ddc;
    cin >> hc >> dc;
    cin >> hm >> dm;
    cin >> k >> w >> a;
    for(i=0; i<=k; i++)
    {
        hhc = hc+i*a;
        ddc = dc+(k-i)*w;
        ll ct1, ct2;
        ct1 = hhc/dm;
        if(hhc%dm)   ct1++;
        ct2 = hm/ddc;
        if(hm%ddc)   ct2++;
        if(ct1>=ct2)
        {
            cout <<"YES\n";
            return ;
        }
    }
    cout <<"NO\n";

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
