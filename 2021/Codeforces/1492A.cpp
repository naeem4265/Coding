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

void solve(int t)
{
    ll i,j,n,m,k,a,b,c;
    string s;
    cin >> n >> a >> b >> c ;
    ll ans;
    if(a>=n)
        ans = a-n;
    else
        ans = a-n%a;       //cout <<ans<<endl;
    if(b>=n)
        ans = min(ans,b-n);
    else
        ans = min(ans,b-n%b);     //cout <<ans<<endl;
    if(c>=n)
        ans = min(ans,c-n);
    else
        ans = min(ans,c-n%c);
    cout <<ans <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
