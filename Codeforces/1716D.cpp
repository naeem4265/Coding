#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 998244353
#define limit 200008
using namespace std;
ll way[limit][450];

ll rec(ll pos, ll mov)
{
    if(pos>n)   return 0;
    way[pos] = (way[pos]+1)%Mod;
    ll x = 1;
    k++;
    while((x*k+pos)<limit-2)
    {
        rec(k,x*k+pos);
        x++;
    }
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n >> k;
    ll x = 1;
    while((x*k)<limit-2)
    {
        rec(1,x*k);   //cout <<x<<"done \n";
        x++;
    }
    for(i=1; i<=n; i++)
        cout <<way[i]<<" ";
    cout <<endl;


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
