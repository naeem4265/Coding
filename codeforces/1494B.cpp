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
    ll ok=1,u,l,d,r;
    cin >> n >> u >> l >> d >> r;
    if(min(u,min(l,min(d,r)))>=2)
    {
        cout <<"YES\n";
        return ;
    }

    if(u==n || d==n)
    {
        if(l==0 || r==0) ok = 0;
    }
    if(l==n || r==n)
    {
        if(u==0 || d==0) ok = 0;
    }
    if(u==n && d==n)
    {
        if(l==1 || r==1) ok = 0;
    }
    if(l==n && r==n)
    {
        if(u==1 || d==1) ok = 0;
    }

    if(u==n-1)
    {
        if(l==0 && r==0) ok = 0;
    }
    if(d==n-1)
    {
        if(l==0 && r==0) ok = 0;
    }
    if(l==n-1)
    {
        if(u==0 && d==0) ok = 0;
    }
    if(r==n-1)
    {
        if(u==0 && d==0) ok = 0;
    }
    if(l==n-1 && r==n-1)
    {
        if(max(u,d)<=1 && min(u,d)==0) ok = 0;
    }
    if(u==n-1 && d==n-1)
    {
        if(max(l,r)<=1 && min(l,r) == 0) ok = 0;
    }
    if((u+d)==2*n)
    {
        if(min(l,r)<2) ok = 0;
    }           // cout <<ok<<endl;

    if((l+r)==2*n )
    {
        if(min(u,d)<2) ok = 0;
    }              // cout <<ok<<endl;

    if((u+d)==2*n-1)
    {
        if(min(l,r)<1 || (l+r)<3)
            ok = 0;
    }
    if((l+r)==2*n-1)
    {
        if(min(u,d)<1 || (u+d)<3)
            ok = 0;
    }
    if(((u==n-1 && d==n-1) && (l+r<=1)) || ((l==n-1 && r==n-1) && (u+d<=1)))
    {
        ok = 0;
    }
    if(ok)
        cout <<"YES\n";
    else
        cout <<"NO\n";
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
