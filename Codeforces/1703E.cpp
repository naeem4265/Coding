#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;
string s[105];
ll n;
ll check(ll x,ll y)
{
    ll ct = 0,xx,yy;

    xx = 0+x;
    yy = 0+y;
    ct += s[xx][yy]-'0';
    s[xx][yy] = '0';

    xx = 0+y;
    yy = n-1-x;
    ct += s[xx][yy]-'0';
    s[xx][yy] = '0';

    xx = n-1-x;
    yy = n-1-y;
    ct += s[xx][yy]-'0';
    s[xx][yy] = '0';

    xx = n-1-y;
    yy = 0+x;
    ct += s[xx][yy]-'0';
    s[xx][yy] = '0';
    return min(ct, 4-ct);
}


void Please_AC(ll tt)
{
    ll i,j;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> s[i];
    }
    ll ans = 0;
    for(i=0; i<n; i++)
    {
        for(j=i; j<(n-i-1); j++)
        {
            ans += check(i,j);
        }
    }
    cout << ans <<endl;
    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
