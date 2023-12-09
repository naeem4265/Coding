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
    cin >> n >> k;
    ll a[n+5], ans = 0;
    for(i=1; i<=n; i++)
    {
        cin >> a[i];
        ans = max(ans, a[i]);
    }
    for(i=1; i<=n; i++)
    {
        ll lo=a[i], hi = 1e10;
        while(lo<=hi)
        {
            m = (lo+hi)/2LL;
            ll temp = m,kk = k;
            for(j=i; j<=n; j++)
            {
                if(a[j]>=temp)   break;
                kk -= (temp-a[j]);
                temp--;
            }
            if(kk>=0 && j<=n)
            {
                ans = max(ans, m);
                lo = m+1;
            }
            else
                hi = m-1;
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
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
