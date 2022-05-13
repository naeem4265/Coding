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

    cin >> n;
    ll d[n+5];
    for(i=1; i<=n; i++)
        cin >> d[i];

    ll ans[n+5];

    for(i=n; i>0; i--)
    {
        if(d[i]==i)
        {
            ans[i] = 0;
            continue;
        }
        for(j=1; j<i; j++)
        {
            if(d[j]==i)
            {
                ans[i] = j;
                break;
            }
        }
        ll temp[i+5];
        for(j=1; j<=i; j++)
        {
            k = j+ans[i];
            if(k>i)
                k -= i;
            temp[j] = d[k];
        }
        for(j=1; j<=i; j++)
        {
            d[j] = temp[j];
        }
    }
    for(i=1; i<=n; i++)
        cout <<ans[i]<<" ";
    cout << endl;
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
