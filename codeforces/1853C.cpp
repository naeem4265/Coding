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
    string s;
    scanf("%lld %lld", &n, &k);
    ll a[n+5];
    for(i=1; i<=n; i++)   scanf("%lld", &a[i]);
    a[0] = 0;
    if(a[1] != 1)
    {
        printf("1\n");
        return;
    }
    ll l=1,h=1e12, ans = 0;
    while( l<=h )
    {
        m = (l+h)/2LL;
        ll temp = m;        //cout <<m<<" "<<ans<<endl;
        for(i=0; i<k; i++)
        {
            ll lo = 1,hi = n, mi, x=0;
            while( lo <= hi)
            {
                mi = (lo+hi)/2LL;
                if(a[mi] > temp)  hi = mi - 1;
                else
                {
                    lo = mi + 1;
                    x = mi;
                }
            }         //cout <<temp<<" "<<x<<"\n";
            temp -= x;
            if(temp<=0)  break;
        }   // cout <<endl<<temp<<" "<<i<<endl;
        if(i==k)
        {
            ans = m;
            h = m-1;
        }
        else
            l = m + 1;

    }
    printf("%lld\n", ans);



    return ;
}


int  main()
{
  //  Fast
//    Freed
//    Fout
    ll t,tt=1;
    scanf("%lld", &tt);
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
