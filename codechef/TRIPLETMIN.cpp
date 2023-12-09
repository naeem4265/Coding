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
    cin >> n  >> q;
    ll a[n+5];
    for(i=1; i<=n; i++)   cin >> a[i];
    sort(a+1, a+n+1);
    ll csum[n+5];
    csum[0] = 0;
    for(i=1; i<=n; i++)
    {
        csum[i] = (n-i)*(n-i-1)/2LL;
        csum[i] += csum[i-1];
    }
    while(q--)
    {
        cin >> k;
        ll lo = 1, hi = n, ans=0;
        while(lo<=hi)
        {
            m = (lo+hi)/2LL;
            if(csum[m]>=k)
            {
                ans = a[m];
                hi = m-1;
            }
            else
                lo = m+1;
        }
        cout <<ans<<endl;
    }


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
