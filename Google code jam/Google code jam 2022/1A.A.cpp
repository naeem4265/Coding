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

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s,t,x;
    cin >> s;
    n = s.size();
    char ok = s[n-1];
    t = "";
    t = s[n-1];
    for(i=n-2,j=n-1; i>=0; i--)
    {
        if(s[i]<s[i+1])
        {
            x = s[i];
            x += s[i];
            t = x+t;
        }
        else if(s[j]>s[i] && s[i]==s[i+1])
        {
            x = s[i];
            x += s[i];
            t = x+t;
        }
        else
        {
            x = s[i];
            t = x+t;
        }
        if(s[i]!=s[i+1])
            j = i+1;
    }
    cout <<"Case #"<<tt<<": ";
    cout << t <<endl;

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
        solve(t);
    return 0;
}
