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
    ll i,j,n,m,k;
    string s;
    cin >> n;
    cin >> s;
    int ct=0;
    if((s[0]=='2' && s[1]=='0' && s[2]=='2' && s[3]=='0')||
    (s[0]=='2' && s[1]=='0' && s[2]=='2' && s[n-1]=='0')||
    (s[0]=='2' && s[1]=='0' && s[n-2]=='2' && s[n-1]=='0')||
    (s[0]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0')||
    (s[n-4]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0'))
    {
        cout <<"YES\n";
        return ;
    }
    cout <<"NO\n";

    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
    cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}
