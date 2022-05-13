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
    string s;
    cin >> n;
    if(n%3==1)
    {
        for(i=1; ; i++)
        {
            if(n<1) break;
            if(i&1)
            {
                cout<<1;
                n-=1;
            }
            else
            {
                cout<<2;
                n-=2;
            }
        }
        cout <<endl;
        return ;
    }
    else
    {
        for(i=1; ; i++)
        {
            if(n<1) break;
            if(i&1)
            {
                cout<<2;
                n-=2;
            }
            else
            {
                cout<<1;
                n-=1;
            }
        }
        cout <<endl;
        return ;
    }
    cout <<endl;

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
