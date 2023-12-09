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
    ll a[n+5] ;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        a[i] = d[i];
    }
    bool vis[34],idx[n+5];
    memset(vis, 0, sizeof(vis));
    memset(idx, 0, sizeof(idx));
    d[n] = 0;
    j = 32;

    while(j>=0)
    {
        j--;
        ll mx = n;
        for(i=0; i<n; i++)
        {
            if( d[i]& (1<<j) )
            {
                if(d[mx]<d[i])
                    mx = i;
            }
        }
        if(mx==n)  continue;

        cout <<a[mx]<<" ";
        idx[mx] = 1;

        for(k=32; k>=0; k--)
        {
            if(d[mx] & (1<<k))
            {
                for(i=0; i<n; i++)
                {
                    if(d[i] & (1<<k) )
                        d[i] ^= (1<<k);
                }
            }
        }
    }
    for(i=0; i<n; i++)
    {
        if(idx[i]==0)    cout <<a[i]<<" ";
    }
    cout <<endl;
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
