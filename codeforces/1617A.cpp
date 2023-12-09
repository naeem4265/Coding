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
    ll i,j,n,m,k,q;
    string s,t;
    cin >> s >> t;
    n = s.size();
    if(t[0]<t[1] && t[0]<t[2])
    {
        bool ok=0;
        for(i=0; i<n; i++)
        {
            if(s[i]==t[0]){   cout <<s[i]; ok = 1; }
        }
        if(ok==0)
        {
            sort(s.begin(),s.end());
            cout << s <<endl;
            return ;
        }
        for(i=0; i<n; i++)
        {
            if(s[i]==t[2])   cout <<s[i];
        }
        for(i=0; i<n; i++)
        {
            if(s[i]==t[1])   cout <<s[i];
        }
        sort(s.begin(),s.end());
        for(i=0; i<n; i++)
        {
            if(s[i]!=t[0] && s[i]!=t[1] && s[i]!=t[2])   cout <<s[i];
        }
        cout <<endl;
        return ;
    }
    if(t[1]<t[0] && t[1]<t[2])
    {
        for(i=0; i<n; i++)
        {
            if(s[i]==t[1])   cout <<s[i];
        }
        sort(s.begin(),s.end());
        for(i=0; i<n; i++)
        {
            if(s[i]!=t[1])   cout <<s[i];
        }
        cout <<endl;
        return ;
    }
    if(t[2]<t[0] && t[2]<t[1])
    {
        for(i=0; i<n; i++)
        {
            if(s[i]==t[2])   cout <<s[i];
        }
        sort(s.begin(),s.end());
        for(i=0; i<n; i++)
        {
            if(s[i]!=t[2])   cout <<s[i];
        }
        cout <<endl;
        return ;
    }
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

