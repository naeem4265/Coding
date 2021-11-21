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

void solve(ll t)
{
    ll i,j,n=10,m,k;
    string s;
    cin >> s;
    ll ans = 10;
    ll ct=0,goal=5;
    for(i=0; i<n; i+=2)
    {
        if(s[i]!='0')
            ct++;
        if(ct>goal)
            ans = min(ans,i+1);
        if(s[i+1]!='1')
            goal--;
        if(ct>goal)
            ans = min(ans,i+2);
    }
    ct = 0; goal=5;
    if(s[0]!='1') goal--;
    for(i=1; i<n; i+=2)
    {
        if(s[i]!='0')
            ct++;
        if(ct>goal)
            ans = min(ans,i+1);
        if(i<9 && s[i+1]!='1')
            goal--;
        if(ct>goal)
            ans = min(ans,i+2);
    }
    cout << ans << endl;
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
