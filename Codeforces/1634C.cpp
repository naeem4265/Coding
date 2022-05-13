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
    cin >> n >> k;
    ll d[n+5][k+5];
    ll odd = -1, even = 0;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=k; j++)
        {
            if(i&1)
            {
                odd += 2;
                d[i][j] = odd;
            }
            else
            {
                even += 2;
                d[i][j] = even;
            }
        }
    }
    if(odd<=(n*k) && even<=(n*k))
    {
        cout <<"YES\n";
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=k; j++)
            {
                cout <<d[i][j]<<" ";
            }
            cout <<endl;
        }
    }
    else
        cout <<"NO\n";

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
