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

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> s ;
    n = s.size();
    for(i=1; i<n; i++)
        if(s[i-1]!=s[i]) break;
    ll ok = 1;
    vector<char> out;
    for(i=0,j=n-1; i<n; i++,j--)
    {
        if(s[j]!='a' && ok)
        {
            out.pb('a');
            ok = 0;
        }
        out.pb(s[i]);
    }
    if(ok)
    {
        cout <<"NO\n";
        return ;
    }
    cout <<"YES\n";
    for(i=0; i<n+1; i++) cout <<out[i];
    cout <<endl;
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
