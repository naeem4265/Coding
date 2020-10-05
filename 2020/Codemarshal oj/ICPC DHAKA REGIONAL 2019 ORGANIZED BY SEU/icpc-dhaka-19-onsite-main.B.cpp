#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define pb push_back
#define mp make_pair
#define Mod 1000000007
#define limit 10008
using namespace std;
bool ck;
ll c[limit];
ll n,p,k,ct;
void rec(ll parent,ll child)
{
    if(ck) return;
   ct++;
 //cout <<ct<<" "<<parent<<" " <<child<<endl;
   if(ct==k)
   {
      cout <<parent<<" "<<child<<endl;
      ck = 1;
      return;
   }
   if(c[child] && (c[child]+ct)<k)
   {
      ct += c[child];
      return;
   }
   if(child<p)
   {
      return ;
   }
   for(ll j=1; j<=p; j++)
   {
      if(ck) return;
      rec(child,child-j);
      c[child] += c[child-j]+1;
    // cout <<child<<" "<<c[child]<<endl;
   }
}
void solve(ll t)
{
    ct=-1;
    ck=0;
    for(ll j=0;j<limit;j++) c[j]=0;
    cin >> n >>p >>k;
    cout <<"Case "<<t<<": ";
    rec(0,n);
   if(!ck)
     cout <<"Invalid\n";
    return;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}
