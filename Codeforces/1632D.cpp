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
ll n,d[limit];
ll stbl[limit][23];

void Parse_build()
{
    for(ll i=n-1; i>=0; i--)
        stbl[i][0] = d[i];
    for(ll j=1; j<22; j++)
    {
        for(ll i=n-1; i-(1<<j)+1>=0; i--)
        {
            stbl[i][j] = __gcd(stbl[i][j-1], stbl[i-(1<<(j-1))][j-1]);
        }
    }
}

void solve(ll tt)
{
    ll i,j;

    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &d[i]);
    }
    Parse_build();

    ll ct=0,l = 0;
    for(i=0; i<n; i++)
    {
        ll lo=l, hi = i, m;
        while(lo<=hi)
        {
            m = (lo+hi)/2;
            ll len = i-m+1;
            ll p = log2(len);
            ll g = __gcd(stbl[i][p], stbl[m+(1<<p)-1][p]);
                    //if(i==2)  cout <<g<<" "<<len<<" "<<p<<' '<<stbl[i][p]<<" "<<stbl[m+(1<<p)-1][p]<<endl;
            if(g==len)
            {
                ct++;  //cout <<i<<" "<<g<<" "<<len<<endl;
                l = i+1;
                break;
            }
            else if(g<len)
            {
                lo = m+1;
            }
            else
            {
                hi = m-1;
            }
        }
        printf("%d ", ct);
    }
    printf("\n");
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

