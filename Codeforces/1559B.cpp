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
    ll i,j,n,m,k;
    string s;
    cin >> n;
    cin >> s;
    j = n;
    for(i=0; i<n; i++)
    {
        if(s[i]!='?')
        {
            j = i;
            break;
        }
    }
    if(j==n)
    {
        s[0] = 'R';
        j = 0;
    }
    for(i=j-1; i>=0; i--)
    {
        if(s[i]!='?') continue;
        if(s[i+1]=='R')
            s[i] = 'B';
        else
            s[i] = 'R';
    }
    for(i=j+1; i<n; i++)
    {
        if(s[i]!='?') continue;
        if(s[i-1]=='R')
            s[i] = 'B';
        else
            s[i] = 'R';
    }
    cout << s << endl;
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
