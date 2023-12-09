#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define limit 1000008
using namespace std;


ll bigmod(ll b,ll p,ll Mod)
{
    ll ans=1;
    while(p)
    {
        if(p&1)
            ans = (ans*b)%Mod;
        b = (b*b)%Mod;
        p = p/2;
    }
    return ans;
}

void solve(ll tc)
{
    ll i,j,n,m,k;
    cin >> n >> m;

    cout <<bigmod(10,n,m*m)/m<<endl;

    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
   // cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

