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

void solve(ll t)
{
    ll i,j,n,m,k,a,b;
    string s;
    cin >> n >> a >> b;
    cin >> s;
    if(b>=0)
    {
        cout << n*a+n*b << endl;
        return ;
    }
    vector<char> v;
    v.pb(s[0]);
    for(i=1; i<n; i++)
    {
        if(s[i-1]==s[i]) continue;
        v.pb(s[i]);
    }
    ll ct = 0;
    if(v.size()==1)
    {
        cout << n*a + b << endl;
        return ;
    }
    for(i=0; i<v.size(); i++)
    {
        if(v[i]=='1') ct++;
    }
    ll ct2 = v.size();         // cout <<ct2<<" "<<ct<<endl;
    ct = min(ct2-ct,ct)+1;     //cout << ct2 <<" "<<ct << endl;
    cout << n*a + ct*b << endl;
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
