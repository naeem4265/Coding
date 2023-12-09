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
    cin >> n;
    ll sz1=s.size(),sz2=t.size();
    map<string,bool> mp1,mp2;
    double ct1=0, ct2 = 0;
    for(i=0; i<=(sz1-n); i++)
    {
        string temp = s.substr(i,n);  //cout <<i<<" "<<temp<<endl;
        if(mp1[temp]==0){
            mp1[temp]=1;
            ct1 += 1.0;
        }
    }
    for(i=0; i<=(sz2-n); i++)
    {
        string temp = t.substr(i,n);
        if(mp1[temp]==1)
        {
            ct2 += 1.0;
            mp2[temp] = 1;
            mp1[temp] = 0;
        }
        else if(mp2[temp]==0)
        {
            ct1 += 1.0;
            mp2[temp] = 1;
        }
    }   //cout <<ct1<<" "<<ct2<<endl;
    cout <<fixed<<setprecision(10)<<ct2/ct1<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
