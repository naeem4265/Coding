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
    ll i,j,n,m,k,c=0,d;
    string s,t;
    cin >> s >> t;
    vector<ll>out;
    for(i=39; i>=0; i--)
    {
        d = c+s[i]-'0'+t[i]-'0'; // cout <<i<<" "<<d<<endl;
        out.pb(d%10);
        c = d/10;
    }
    if(c)
        out.pb(c);
    for(i=out.size()-1; i>=0; i--) cout <<out[i]; cout <<endl;

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

