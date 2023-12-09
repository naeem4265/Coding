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
    cin >> n;
    ll d[n+5];
    ll idx[n+5];
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        idx[d[i]] = i;
    }
    ll l = n+1, r = -1;
    ll ans = 0;
    for(i=0; i<n; i++)
    {
        l = min(l, idx[i]);
        r = max(r, idx[i]);
        ll left, right;

        left = max(0LL, r-i*2);
        right = min(l, n-1-i*2);
        ans += max(0LL, right-left+1);

        left = max(0LL, r-i*2-1);
        right = min(l, n-1-i*2-1);
        ans += max(0LL, right-left+1);

         // cout <<i<<" "<<l<<" "<<r<<" "<<left<<" "<<ans<<endl;

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
