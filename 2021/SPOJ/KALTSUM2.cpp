#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 100008
using namespace std;
ll ps[355][limit];
ll block = 350;

void solve(ll t)
{
    ll i,j,n,m,k,q;
    cin >> n >> q;
    ll d[n+5];
    ll cum[n+5];
    cum[0] = 0;
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
        cum[i] = cum[i-1]+d[i];
    }

    memset(ps,0,sizeof(ps));
    for(i=1; i<=k; i++)
    {
        for(j=n-i+1; j>0; j--)
        {
            ll sum = cum[j+i-1] - cum[j-1];
            ps[i][j] = sum - ps[i][j+i]; //cout << ps[i][j] << " "<<i<<" "<<j<<endl;
        }
    }

    for(i=0; i<q; i++)
    {
        ll l,r,k;
        cin >> l >> r >> k;
        if(k>=block)
        {
            ll ans = 0;
            ll sign = 1;
            for(j=l; j<r; j+=k)
            {
                ans += (cum[j+k-1]-cum[j-1])*sign;
                sign = sign*-1;
            }
            cout << ans <<endl;
        }
        else
        {
            ll sign = -1;
            if(((r-l+1)/k)&1) sign = 1; //cout <<ps[k][l]<<" "<<ps[k][r+1]*sign<<endl;
            ll ans = ps[k][l] + ps[k][r+1]*sign;
            cout << ans <<endl;
        }
    }

    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
