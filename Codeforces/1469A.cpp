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
    ll i,j,n,m,k;
    string s;
    cin >> s;
    ll ct=0,icche=0,ok=1;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='(') ct++;
        else if(s[i]==')')
        {
            ct--;
            if(ct<0)
            {
                icche += ct;
                ct = 0;
                if(icche <0) ok=0;
            }
        }
        else
        {
            icche++;
        }
    }
    if(ct)
    {
        icche -= ct;
        ct = 0;
    }
    if(icche<0 || icche&1) ok=0;

    ct=0;icche=0;
    for(i=s.size()-1; i>=0; i--)
    {
        if(s[i]==')') ct++;
        else if(s[i]=='(')
        {
            ct--;
            if(ct<0)
            {
                icche += ct;
                ct = 0;
                if(icche <0) ok=0;
            }
        }
        else
        {
            icche++;
        }
    }
    if(ct)
    {
        icche -= ct;
        ct = 0;
    }
    if(icche<0 || icche&1) ok=0;

    if(ok) cout <<"YES\n";
    else cout <<"NO\n";

    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
    cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

