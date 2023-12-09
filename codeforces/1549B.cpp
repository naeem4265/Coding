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
    cin >> n;
    cin >> s >> t;
    ll ct=0;
    for(i=0; i<n; i++)
    {
        if(t[i]=='1')
        {
            if(s[i]=='0')
            {
                ct++;
                t[i] = '0';
            }
            else if(i && s[i-1]=='1')
            {
                ct++;
                s[i-1] = '0';
                t[i] = '0';
            }
            else if(i<n-1 && s[i+1]=='1')
            {
                ct++;
                s[i+1]='0';
                t[i] = '0';
            }
        }
    }
    for(i=0; i<n; i++)
    {
        if(t[i]=='1')
        {
            if(s[i]=='0')
            {
                ct++;
                t[i] = '0';
            }
            else if(i && s[i-1]=='1')
            {
                ct++;
                s[i-1] = '0';
                t[i] = '0';
            }
            else if(i<n-1 && s[i+1]=='1')
            {
                ct++;
                s[i+1]='0';
                t[i] = '0';
            }
        }
    }
    cout << ct << endl;
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
