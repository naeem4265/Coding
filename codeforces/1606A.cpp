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
    ll i,j,n,m,k,q;
    string s;
    cin >> s;
    n = s.size();
    ll ab=0,ba=0;
    for(i=1; i<n; i++)
    {
        if(s[i-1]=='a' && s[i]=='b') ab++;
        if(s[i-1]=='b' && s[i]=='a') ba++;
    }
    if(ab>ba)
        s[n-1] = 'a';
    if(ba>ab)
        s[0] = 'a';

    cout << s<<endl;
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
