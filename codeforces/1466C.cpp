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
    ll i,j,n;
    string s,t;
    cin >> s ;
    t = s;
    n = s.size();
    ll mn=Mod,ct=0;
    for(i=0; i<n-2; i++)
    {
        if(s[i]==s[i+2] && s[i]!='*')
        {
            ct++;
            s[i+2]='*';
        }
        if(s[i]==s[i+1] && s[i]!='*')
        {
            s[i+1]='*';
            ct++;
        }
    }
    if(s[n-2]==s[n-1] && s[n-1]!='*')
        ct++;
    mn = min(mn,ct);
    s = t;
    ct=0;
    for(i=0; i<n-2; i++)
    {
        if(s[i]==s[i+1] && s[i]!='*')
        {
            ct++;
            s[i+1]='*';
        }
        if(s[i]==s[i+2] && s[i]!='*')
        {
            s[i+2]='*';
            ct++;
        }
    }
    if(s[n-2]==s[n-1] && s[n-1]!='*')
        ct++;
    mn = min(mn,ct);
    cout <<mn<<endl;
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

