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
    string s;
    cin >> n >> q;
    ll d[n+5],mx[n+5],csum[n+5];
    csum[0] = 0;
    mx[0] = 0;
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
        csum[i] = csum[i-1]+d[i];
        mx[i] = max(mx[i-1], d[i]);
    }
    ll ans[q+5];
    for(i=0; i<q; i++)
    {
        ll x;
        cin >> x;
        ans[i] = 0;
        ll l=1,h=n;
        while(l<=h)
        {
            m = (l+h)/2;
            if(mx[m]<=x)
            {
                ans[i] = csum[m];
                l = m+1;
            }
            else
                h = m-1;
        }  // cout <<i<<" "<<x<<" "<<l<<" "<<h<<" "<<m<<" "<<csum[m]<<endl;
    }
    for(i=0; i<q; i++)  cout <<ans[i]<<" ";
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
