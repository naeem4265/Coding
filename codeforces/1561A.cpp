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
    cin >> n;
    ll d[n+5],ct=0;
    for(i=1; i<=n; i++)
        cin >> d[i];

    for(i=1; i<=n*n; i++)
    {
        for(j=1; j<n; j++)
        {
            if(d[j]>d[j+1]) break;
        }

        if(j==n)
        {
            cout << ct << endl;
            return ;
        }

        if(i&1) j=1;
        else j=2;
        for(; j<(n-i%2); j+=2)
        {
            if( d[j]>d[j+1] )
            {
                swap(d[j],d[j+1]);
            }
        }
        ct++;
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
        solve(t);
    return 0;
}
