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

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n >> m >> k;
    ll a,ct1=0,ct2=0;
    bool ok1=0,ok2=0;
    for(i=0; i<k; i++)
    {
        cin >> a;
        if((a/n)>1)
        {
            ct1 += a/n;
            if((a/n)>2) ok1=1;
        }
        if((a/m)>1)
        {
            ct2 += a/m;
            if((a/m)>2) ok2=1;
        }
    }
    if((m&1 && (ct1>=m && ok1)) || (m%2==0 && ct1>=m))
        cout <<"Yes\n";
    else if((n&1 && (ct2>=n && ok2)) || (n%2==0 && ct2>=n))
        cout <<"Yes\n";
    else
        cout <<"No\n";

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
        Please_AC(t);
    return 0;
}
