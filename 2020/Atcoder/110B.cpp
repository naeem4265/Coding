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
    cin >> n ;
    string s;
    cin >> s;
    ll ans=-1;
    if(n==1)
    {
        if(s[0]=='0')
            ans = 10000000000;
        if(s[0]=='1')
            ans = 2*10000000000;
        cout <<ans<<endl;
        return ;
    }
    m = 0;
    if(s[0]=='0') m=1;
    if(s[0]=='1' && s[1]=='0') m=2;
    ll ct=0;
    if(m) ct++;
    for(i=m; i<=(n-3); i+=3)
    {
        ct++;    //cout <<i<<" loop "<<ct<<endl;
        if(s[i]!='1' || s[i+1]!='1' || s[i+2]!='0')
        {
            ans = 0;
            break;
        }
    }
    m = n-m;
    if(m%3==1 && s[n-1]!='1') ans = 0;
    if(m%3==2 && (s[n-1]!='1' || s[n-2]!='1')) ans = 0;
    if(m%3) ct++;
    if(ans==0)
    {
        cout <<ans<<endl;
        return ;
    }
    ans = 10000000000-ct+1;         //cout <<ans<<" "<<ct<<endl;
    cout <<ans<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

