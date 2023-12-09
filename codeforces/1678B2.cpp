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
    string s,t;
    cin >> n;
    cin >> s;
    t = s;
    ll d[n+5];
   // for(i=0; i<n; i++)    cin >> d[i];
    ll ans = 0;
    if(s[0]!=s[1])
    {
        if(s[0] =='1')
            s[0] = '0';
        else
            s[1] = s[0];
        ans++;
    }
    for(i=3; i<n; i+=2)
    {
        if(s[i-1]!=s[i])
        {
            ans++;
            if(s[i]==s[i-2])
                s[i-1] = s[i];
            else
                s[i] = s[i-1];
        }
    }
    ll ct=1;    // cout <<s<<endl;
    for(i=1; i<n; i++)
    {
        if(s[i]!=s[i-1])
            ct++;
    }

    s = t;
    if(s[0]!=s[1])
    {
        if(s[0]=='0')
            s[0] = '1';
        else
            s[1] = s[0];
    }
    for(i=3; i<n; i+=2)
    {
        if(s[i-1]!=s[i])
        {
            if(s[i]==s[i-2])
                s[i-1] = s[i];
            else
                s[i] = s[i-1];
        }
    }
    ll ct2=1;    // cout <<s<<endl;
    for(i=1; i<n; i++)
    {
        if(s[i]!=s[i-1])
            ct2++;
    }

    cout <<ans;
    cout <<" "<<min(ct,ct2);
    cout <<endl;
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
