#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n >> k;
    ll d[n+5],p[n+5],mx,mn,ans=1e9;
    for(i=0; i<n; i++)
        cin >> d[i];
    for(j=0; j<=3000; j++)
    {
        for(i=0; i<n; i++)
        {
            if(j==0)  p[i] = k;
            else p[i] = min(max(1LL,d[i]/j),k);
        }
        mn = 1e9;
        mx = 0;
        for(i=0; i<n; i++)
        {
            mn = min(mn, d[i]/p[i]);
            mx = max(mx, d[i]/p[i]);
        }
        ans = min(ans, mx-mn);
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
        Please_AC(t);
    return 0;
}
