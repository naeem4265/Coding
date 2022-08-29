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
    ll h,key[5];
    key[0] = 0;
    cin >> h >> key[1] >> key[2] >> key[3];
    if(key[h]==0)
    {
        cout <<"NO\n";
        return ;
    }
    h = key[h];
    if(key[h]==0)
    {
        cout <<"NO\n";
        return ;
    }
    cout <<"YES\n";



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
