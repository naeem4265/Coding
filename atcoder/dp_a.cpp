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
    ll i,j,n,m,k,q;
    cin >> n;
    ll h[n+5];
    for(i=1; i<=n; i++)    cin >> h[i];
    ll ans[n+5];
    ans[n] = 0;
    ans[n-1] = 1e18;
    for(i=n; i>1; i--)
    {
        ans[i-1] = min(ans[i-1],ans[i]+abs(h[i]-h[i-1]));
        ans[i-2] = ans[i]+abs(h[i]-h[i-2]);
    }
    cout << ans[1] <<endl;

    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

