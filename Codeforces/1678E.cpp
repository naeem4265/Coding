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

void solve(ll tt)
{
    ll i,j,n,m,q;

    cin >> n;
    ll ca[n+5],cb[n+5],link[n+5];
    for(i=0; i<n; i++)    cin >> ca[i];
    for(i=0; i<n; i++)    cin >> cb[i];
    for(i=0; i<n; i++)
    {
        link[ca[i]] = cb[i];
    }
    ll l=1,r=n,next,k=0;
    ll val[n+5];
    memset(val, 0, sizeof(val));
    for(i=1; i<=n; i++)
    {
        if(val[i] || link[i]==i)  continue;
        next = i;
        while(val[next]==0)
        {
            if(k&1)
                val[next] = r--;
            else
                val[next] = l++;
            next = link[next];
            k++;
        }
    }
    ll ans = 0;
    for(i=0; i<n; i++)
    {
        if(ca[i]==cb[i])  continue;
        ans += abs(val[ca[i]]-val[cb[i]]);
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
