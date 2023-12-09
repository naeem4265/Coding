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
ll fx[limit];

void solve(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n;
    cout <<fx[n]<<endl;

    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    for(ll i=0; i<limit; i++)
        fx[i] = i;
    for(ll i=1; i<limit; i++)
    {
        for(ll j=i+i; j<limit; j+=i)
        {
            fx[j] += fx[i];
        }    //cout <<i<<" "<<fx[i]<<endl;
    }
    ll t,tt=1;
    //cin >> tt;

    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
