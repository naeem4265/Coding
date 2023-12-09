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

    scanf("%lld", &n);
    ll sum = 1;
    map<ll,bool> mymap;
    for(i=2; i<limit; i++)
    {
        ll x=i,z=1;
        z += x;
        for(j=0; ; j++)
        {
            x = x*i;
            z += x;
            if(z>=n)    break;
            if(mymap[z]) continue;
            mymap[z] = 1;
            sum = (sum+z%Mod)%Mod;   //cout<<z<<' '<<sum<<endl;
        }
    }
    printf("%lld\n",sum);
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
