#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 200008
using namespace std;
ll up[2][limit],dn[2][limit];
ll n;


void Please_AC(ll tt)
{
    ll i,j,n=2,m,k,q;

    cin >> m;
    n = m;
    ll d[2][m+5];

    for(i=0; i<2; i++)
    {
        for(j=0; j<m; j++)
            cin >> d[i][j];
    }


    ll ans = 1e18,t=0;


//    for(i=1; i<m; i++)
//    {
//        t = max(t, d[0][i]);
//        t++;
//    }
//    for(i=m-1; i>=0; i--)
//    {
//        t = max(t, d[1][i]);
//        t++;
//    }
//    ans = t; // cout <<t<<"  here "<<endl;
//    t = 0;
//    for(i=0; i<m; i++)
//    {
//        if(i==0)
//        {
//            t = max(t+1, d[1][0]+1);
//        }
//        else if(i&1)
//        {
//            t = max(t+1, d[1][i]+1);
//            t = max(t+1,d[0][i]+1);
//        }
//        else
//        {
//            t = max(t+1,d[0][i]+1);
//            t = max(t+1, d[1][i]+1);
//        }   //cout <<i<<" "<<t<<endl;
//    }
//    ans = min(ans, t);



    t = 0;
    for(i=1; i<n; i++)
    {
        t = max(t+1, d[0][i]+1);
    }
    for(i=n-1; i>=0; i--)
    {
        t = max(t+1, d[1][i]+1);
    }
    ans = t;
    up[1][0] = t;
    for(i=1; i<n; i++)
    {
        up[1][i] = up[1][i-1]-1;
    }
    up[0][n-1] = up[1][n-1]-1;
    for(i=n-2; i>0; i--)
    {
        up[0][i] = up[0][i+1]-1;
    }

    t = max(1LL,d[1][0]+1);
    for(i=1; i<n; i++)
    {
        t = max(t+1, d[1][i]+1);   //cout <<i<<" "<<t<<endl;
    }
    for(i=n-1; i>0; i--)
    {
        t = max(t+1, d[0][i]+1);
    }
    ans = min(ans, t);

    dn[0][0] = t;
    dn[0][1] = t;   //cout <<dn[0][0]<<" here "<<t<<endl;
    for(i=2; i<n; i++)
    {
        dn[0][i] = dn[0][i-1]-1;
    }
    dn[1][n-1] = dn[0][n-1]-1;
    for(i=n-2; i>=0; i--)
    {
        dn[1][i] = dn[1][i+1]-1;
    }

    t = max(1LL,d[1][0]+1);
    for(i=1; i<m; i++)
    {
        if(i&1)
        {
            t = max(t+1, d[1][i]+1);
            ll x = max(0LL, t-dn[1][i]);
            ans = min(ans, x+dn[0][i]);
        //cout <<i<<' '<<t<<' '<<dn[0][i]<<" "<<ans<<endl;
            t = max(t+1,d[0][i]+1);
        }
        else
        {
            t = max(t+1,d[0][i]+1);
            ll x = max(0LL, t-up[0][i]);
            ans = min(ans, x+up[1][i]);
        //cout <<i<<' '<<t<<' '<<up[1][i]<<" "<<ans<<endl;
            t = max(t+1, d[1][i]+1);
        }   //cout <<i<<" "<<t<<" "<<ans<<endl;
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
