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
    ll x,y;
    cin >> x >> y;
    if(x&1 && y&1)
    {
        if(x>y)
        {
            cout <<(x-y)/2<<" "<<y<<endl;
        }
        else
        {
            cout <<x<<" "<<(y-x)/2<<endl;
        }
        return ;
    }
    if(x%2==0 && y%2==0)
    {
        cout <<x/2<<" "<<y/2<<endl;
        return ;
    }
    cout <<"-1 -1\n";
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
