#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll unsigned long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 4294967291
#define limit 1000008
using namespace std;

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

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n;
    ll ans = 0;
    if(!n)
    {
        cout<<0<<endl;
        return ;
    }
    ll x= bigmod(2LL,n-1);
    ll y = bigmod(3LL,n);
    if(y==0ll) y=Mod-1;
    else y--;
    //cout <<x<<" "<<y<<endl;
    cout << (x*y)%Mod <<endl;
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
        Please_AC(t);
    return 0;
}
