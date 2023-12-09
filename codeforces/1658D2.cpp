#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
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
    ll l,r;
    cin >> l >> r;

    ll ct[30],ct2[30], d[r+1];
    memset(ct, 0, sizeof(ct));
    memset(ct2, 0, sizeof(ct2));

    for(i=l; i<=r; i++)
    {
        for(j=0,k=1; j<28; j++,k*=2)
        {
            if(i&k)
                ct[j]++;
        }
    }

    for(i=l; i<=r; i++)
    {
        cin >> d[i];
        for(j=0,k=1; j<28; j++, k*=2)
        {
            if(d[i]&k)
                ct2[j]++;
        }
    }
    ll ans = 0;
    for(j=0,k=1; j<28; j++, k*=2)
    {
        if(ct[j]!=ct2[j])
        {
            ans += k;
        }
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
