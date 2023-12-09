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
    ll a,b;
    cin >> a >> b;
    if(a>b)
    {
        while(a && b)
        {
            cout <<0<<1;
            a--;
            b--;
        }
        while(a)
        {
            cout <<0;
            a--;
        }
        cout <<endl;
        return ;
    }
    if(b>=a)
    {
        while(a && b)
        {
            cout <<1<<0;
            a--;
            b--;
        }
        while(b)
        {
            cout <<1;
            b--;
        }
        cout <<endl;
        return ;
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
