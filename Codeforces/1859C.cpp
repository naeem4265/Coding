#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;

void Please_AC(ll tt)
{
    ll n;
    cin >> n;
    ll ans = 0;
    for(ll i=1,j; i<=n; i++)
    {
        ll temp = 0, mx = 0;
        for(j=1; j<i; j++)
        {
            temp += j*j;
            mx = max(mx, j*j);
        }
        ll k = n;
        for(; j<=n; j++,k--)
        {
            temp += (k*j);
            mx = max(mx, k*j);
        }
        temp -= mx;
        ans = max(ans, temp);
    }

    cout << ans <<endl;

    return ;
}


int  main()
{
    Fast
 //   Freed
 //   Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
