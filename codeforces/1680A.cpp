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
    ll i,j,n=0,m,k,q;
    string s;
    //cin >> n;
    ll d[n+5];
   // for(i=0; i<n; i++)    cin >> d[i];
    ll l1,l2,r1,r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if(l1==l2)
        cout <<l1<<endl;
    else if(l2>l1 && r1>=l2)
        cout <<l2<<endl;
    else if(l1>l2 && r2>=l1)
        cout <<l1<<endl;
    else
        cout <<l1+l2<<endl;
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
