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

ll nPr(ll n,ll r)
{
    ll ans=1,i;
    for(i=n; i>r; i--)
        ans = (ans*i)%Mod;
    return ans;
}

void solve(ll tc)
{
    ll i,j,n,m,k;
    cin >> n >> m;
    for(i=0; i<m; i++)
        cin >> k;
    cout <<nPr(n,m)<<endl;
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

