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
#define limit 1008
using namespace std;

ll A[limit][limit];
map<ll,bool> mymap;

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n >> m;
    for(i=0,j=2; i<m; i++,j+=2)
    {
        A[i][0] = j;
        mymap[j] = 1;
    }
    ll x,y;
    for(i=0; i<n; i++)
    {
        ll y = x/A[i][0];
        y = y*x;
        for(j=1; j<m; j++)
        {
            y += A[i][0];
            A[i][j] = y;
        }
        x = y;
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cout <<A[i][j]<<" ";
        }
        cout << endl;
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
