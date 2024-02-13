#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

///Iterative
ll bigmod(ll b,ll p,ll M)
{
    ll ans=1;
    b=(b+M)%M;
    while(p)
    {
        if(p&1)
            ans = (ans*b)%M;
        b = (b*b)%M;
        p = p/2;
    }
    return ans;
}
///recursive
/*
ll bigmod(ll b,ll p)
{
    if(p==0) return (ll)1;
    ll ans=bigmod(b,p/2);
    ans = (ans*ans)%Mod;
    if(p&1) ans=(b*ans)%Mod;
    return ans;
}
*/
int  main()
{
//    Fast
//    Freed
//    Fout
    int i,tt=1;
    ll n,x,y,a,b,c,d,e,s,t;
    cin >> b >> n;
    cout <<bigmod(b,n, Mod )<<endl;
  return 0;
}


