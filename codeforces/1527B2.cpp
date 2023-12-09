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
    cin >> n;
    cin >> s;
    ll zero = 0;
    for(i=0; i<n; i++)
    {
        if(s[i]=='0') zero++;
    }
    ll ct = 0;
    for(i=0,j=n-1; i<=j; i++,j--)
    {
        if(s[i]!=s[j])
        {
            ct++;
        }
    }
    if(ct==0)
    {
        if(zero==0 || (n&1 && s[n/2]=='0' && zero>1))
        {
            cout << "ALICE\n" ;
        }
        else
        {
            cout << "BOB\n";
        }
        return ;
    }
    if(zero==2 && n&1 && s[n/2]=='0')
    {
        cout << "DRAW\n";
        return ;
    }
    cout <<"ALICE\n";
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
