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

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n >> m >> t;
    for(i=4,j=0,k=1; ; i++,k++)
    {
        j += i;
        if(j>=m)
        {
            break ;
        }
    }
    for(i = k,j=i-n+1; i>=0; i--,j--)
    {
        ll x,y;
        x = i*(i+7)/2;
        y = j*(j+5)/2;    //cout << x << " "<< y << endl;
        if(x>m) continue;
        if((m-x)==(y-t))
        {
            cout << m - x << endl;
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
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
