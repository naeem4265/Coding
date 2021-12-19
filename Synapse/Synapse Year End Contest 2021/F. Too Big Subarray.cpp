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
    ll x,y,ans = 0;
    cin >> n >> x >> y;
    ll d[n+5];
    for(i=0; i<n; i++)
        cin >> d[i];

    ll sum = 0;
    for(i=0; i<x; i++)
    {
        sum += d[i];
        if(sum>y)
        {
            m = sum-y;
            ans += m;
            d[i] -= m;
            sum -= m;
        }
    }
    for(i=0,j=x; j<n; j++,i++)
    {
        sum += d[j];
        sum -= d[i];
        if(sum>y)
        {
            m = sum-y;
            ans += m;
            d[j] -= m;
            sum -= m;
        }  //cout <<i<<" "<<j<<" "<<ans <<" "<<sum<<endl;
    }
    cout << ans <<endl;
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

