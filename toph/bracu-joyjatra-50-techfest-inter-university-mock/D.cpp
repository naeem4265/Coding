#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
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
    cin >> n >> m;
    ll ct=0,ans;
    while(n>1)
    {
        k = log2(n);
        n -= pow(2,k);
        if(ct) ct++;
        else
            ct+= k;
        if(n==1) ct++;
    }
    ans = ct;
    ct = 0;
    while(m>1)
    {
        k = log2(m);
        m -= pow(2,k);
        if(ct) ct++;
        else
            ct+= k;
        if(m==1) ct++;
    }            //cout <<ans<<" "<<ct<<endl;
    cout << min(ans,ct) <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
