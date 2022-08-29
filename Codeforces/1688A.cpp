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
    string s;
    cin >> n;
    ll ans = 1;
    while((ans&n)==0LL)
    {
        ans = ans << 1LL;
    }
    if((ans^n)>0LL)
    {
        cout << ans <<endl;
        return ;
    }
    ll temp = 1;
    for(i=0; i<65; i++)
    {
        temp = 1LL<<i;
        if((ans+temp)^n && (ans+temp)&n)
        {
            cout <<ans+temp<<endl;
            return ;
        }
    }


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
