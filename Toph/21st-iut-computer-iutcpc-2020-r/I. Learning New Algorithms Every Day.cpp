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

void solve(ll tt)
{
    ll i,j,n,m,k;
    string s,t;
    cin >> s;
    ll sz = s.size();
    ll x = 0;
    t = "";
    char ch;
    for(i=0; i<sz; i++)
    {
        x = (x*10+s[i]-'0');
        ch = '0'+x/7;
        t += ch;
        x %= 7;       //cout <<x<<" "<<ch<<" "<<t<<endl;
    }

    ch='0';
    t = ch+t;
    sz = t.size();
    ll temp=0;
    if(x<4) temp = x;
    else if(x<5) temp = x+1;
    else temp = x+2;
    for(i=sz-1; i>=0; i--)
    {
        x = (t[i]-'0')*9+temp;
        ch = '0' + x%10;
        t[i] = ch;
        temp = x/10;
    }
    bool ok=1;
    for(i=0; i<sz; i++)
    {
        if(ok && t[i]=='0') continue;
        cout << t[i];
        ok=0;
    }

    cout << endl;
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
