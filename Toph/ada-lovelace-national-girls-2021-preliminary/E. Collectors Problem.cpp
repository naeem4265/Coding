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

    cin >> n >> m;
    ll p[m+5],s[m+5];
    for(i=0; i<m; i++)
        cin >> p[i];
    for(i=0; i<m; i++)
        cin >> s[i];
    ll d,sum=0;
    for(i=0; i<n; i++)
    {
        cin >> d;
        sum += d;
    }
    ll ans = -1e18;
    for(i=0; i<m; i++)
    {
        ans = max(ans, sum-p[i]*n-s[i]);  //cout <<i<<" "<<ans<<endl;
    }
    if(ans<0LL)
        cout <<"Loss "<< -ans <<endl;
    else if(ans>0LL)
        cout <<"Profit "<< ans <<endl;
    else
        cout <<"Neutral\n";

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
