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

void solve(string s)
{
    ll n,i,j;
    n = s.size();
    ll sum=0,m=33;

    for(i=0; i<n; i++)
    {
        sum = (sum*10+s[i]-'0')%33;
    }
    if( sum )
        cout <<"NO\n";
    else
        cout <<"YES\n";
    return ;
}
int  main()
{
//    Fast
//    Freed
   // Fout
    ll t,tt=1;
    while(1)
    {
        string s;
        cin >> s;
        if(s=="-1") return 0;
        solve(s);
    }
    return 0;
}


