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
    string s;
    cin >> s;
    ll ct=0;
    n = s.size();
    for(i=0; i<n; i++)
    {
        ct += s[i]-'a'+1;
    }
    if(n&1)
        ct -= 2LL*min(s[0]-'a'+1, s[n-1]-'a'+1);
    if(ct>0)
    {
        cout <<"Alice "<<ct<<endl;
    }
    else
        cout <<"Bob "<<-ct<<endl;


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
