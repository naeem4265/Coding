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
ll n,m,rd,cd;

ll rec(ll ri, ll ci,ll dr,ll dc)
{
    if(ri==rd || ci==cd)    return 0;
    if((ri+dr)>n)  dr=-1;
    if((ri+dr)<1)  dr = 1;
    if((ci+dc)>m)  dc = -1;
    if((ci+dc)<1)  dc = 1;
    return 1+rec(ri+dr,ci+dc,dr,dc);
}

void solve(ll tt)
{
    ll i,j,ri,ci;
    cin >> n >> m >> ri >> ci >> rd >> cd;
    cout <<rec(ri,ci,1,1) <<endl;
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
