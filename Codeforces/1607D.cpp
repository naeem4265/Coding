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
    cin >> n;

    ll d[n+5];
    for(i=0; i<n; i++)
    {
        cin >> d[i];
    }
    cin >> s;
    bool ok=1;
    vector<ll> blue,red;
    for(i=0; i<n; i++)
    {
        if(s[i]=='B')
            blue.pb(d[i]);
        else
            red.pb(d[i]);
    }

    if(blue.size())
        sort(blue.begin(),blue.end());
    for(i=0,j=1; i<blue.size(); i++,j++)
    {
        if( blue[i]< j)  ok = 0;
    }

    if(red.size())
        sort(red.begin(),red.end());
    for(i=0; i<red.size(); i++,j++)
    {
        if( red[i]>j )  ok = 0;
    }
    if(ok)  cout <<"YES\n";
    else   cout <<"NO\n";

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
