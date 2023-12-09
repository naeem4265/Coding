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
    cin >> n >> k;
    ll d[n+5];
    for(i=0; i<n; i++)  cin >> d[i];
    sort(d, d+n);
    ll lo=0, hi = Mod, ans=0;
    while(lo<=hi)
    {
        m = (lo+hi)/2;
        ll l=0,r=n-1;
        bool ok = 1;
        for(r=n-1,j=0; l<=r && j<k; j++,r--)
        {
            ll sum = d[r];
            while(l<r && sum<m)
            {
                sum += d[l];
                l++;
            }
            if(sum<m)
            {
                ok = 0;
                break;
            }
        }
        if(j<k)   ok = 0;

        if(ok)
        {
            ans = m;
            lo = m+1;
        }
        else
            hi = m-1;
    }
    cout <<ans <<endl;


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
