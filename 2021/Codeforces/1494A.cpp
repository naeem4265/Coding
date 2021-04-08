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

void solve(int t)
{
    ll i,j,n,m,k;
    string s;
    cin >> s ;
    n = s.size();
    ll open=1,close=1,other;
    for(i=1; i<n; i++)
    {
        if(s[i]==s[0])
        {
            s[i] = '(';
            open++;
        }
    }
    s[0] = '(';
    for(i=1; i<n-1; i++)
    {
        if(s[i]==s[n-1])
        {
            s[i] = ')';
            close++;
        }
    }
    s[n-1] = ')';
    other = n - open-close;
    if(abs(open-close)!=other || s[0]==s[n-1])
    {
        cout <<"no\n";
        return ;
    }
    if(open <= close)
    {
        ll ct=0;
        for(i=0; i<n; i++)
        {
            if(s[i]!=s[n-1])
            {
                ct++;
            }
            else
                ct--;
            if(ct<0)
            {
                cout <<"no\n";
                return ;
            }
        }
    }
    else
    {
        ll ct=0;
        for(i=0; i<n; i++)
        {
            if(s[i]!=s[0])
            {
                ct--;
            }
            else
                ct++;
            if(ct<0)
            {
                cout <<"no\n";
                return ;
            }
        }
    }
    cout <<"yes\n";
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
