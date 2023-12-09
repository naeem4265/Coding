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
    cin >> n;
    ll d[n+5];
    for(i=0; i<n; i++)
        cin >> d[i];
    ll G = 0;
    for(i=0; i<n; i+=2)
    {
        G = __gcd(G,d[i]);
    }
    for(i=1; i<n; i+= 2)
    {
        if(d[i]%G==0)   break;
    }
    if(i>=n)
    {
        cout <<G<<endl;
        return ;
    }
    G = 0;
    for(i=1; i<n; i+=2)
    {
        G = __gcd(G,d[i]);
    }
    for(i=0; i<n; i+= 2)
    {
        if(d[i]%G==0)   break;
    }
    if(i>=n)
    {
        cout <<G<<endl;
        return ;
    }
    cout <<0<<endl;
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
