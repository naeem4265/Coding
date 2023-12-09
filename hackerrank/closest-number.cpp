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
ll bigmod(ll b,ll p)
{
    ll ans=1;
    while(p)
    {
        if(p&1)
            ans = (ans*b)%Mod;
        b = (b*b)%Mod;
        p = p/2;
    }
    return ans;
}

void solve(int t)
{
    ll a,b,x,f,r;
    cin >> a >> b >> x ;
    if(b<0)
        cout <<"0\n";
    else{
        a = bigmod(a,b);
        f = x*(a/x);
        r = f+x;
        if(a-f<=r-a)
            cout<<f<<endl;
        else
            cout<<r<<endl;
    }
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

