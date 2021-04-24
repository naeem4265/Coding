#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll tt)
{
    ll i,j,n;
    string s;
    cin >> n ;
    cin >> s;
    ll t=0,m=0,ok=1;
    for(i=0; i<n; i++)
    {
        if(s[i]=='T') t++;
        else
        {
            m++;
            if(m>t) ok = 0;
        }
    }
    t=0,m=0;
    for(i=n-1; i>=0; i--)
    {
        if(s[i]=='T') t++;
        else
        {
            m++;
            if(m>t) ok = 0;
        }
    }
    if(2*m!=t) ok = 0;
    if(ok)
        cout <<"YES\n";
    else
        cout <<"NO\n";
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
