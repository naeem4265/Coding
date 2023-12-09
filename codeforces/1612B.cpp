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
    string s;
    ll a,b;
    cin >> n >> a >> b;
    vector<ll>A,B,C;
    for(i=1; i<=n; i++)
    {
        if(i>a && i<b)
            C.pb(i);
        else if(i==a)
            A.pb(i);
        else if(i==b)
            B.pb(i);
        else if(i>=a)
            A.pb(i);
        else if(i<=b)
            B.pb(i);
    }
    m = n/2;
    if((C.size()+A.size())<m || (C.size()+B.size())<m)
    {
        cout <<-1<<endl;
        return;
    }
    for(i=0; i<A.size(); i++)
        cout <<A[i]<<" ";
    for(i=0; i<C.size(); i++)
        cout <<C[i]<<" ";
    for(i=0; i<B.size(); i++)
        cout <<B[i]<<" ";
    cout <<endl;
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
