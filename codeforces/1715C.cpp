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

    cin >> n >> q;
    ll d[n+5];
    ll ans = 0,pre, post;
    for(i=1,j=n; i<=n; i++,j--)
    {
        cin >> d[i];
        ans += i*j;
    }
    for(i=1; i<n; i++)
    {
        if(d[i]==d[i+1])
        {
            pre = i;
            post = n-i;
            ans -= pre*post;
        }
    }
    while(q--)
    {
        ll idx,x;
        cin >> idx >> x;
        if(d[idx]==x)
        {
            cout << ans <<endl;
            continue;
        }
        if(idx>1 && d[idx]==d[idx-1])
        {
            pre = idx-1;
            post = n-idx+1;
            ans += pre*post;
        }
        if(idx<n && d[idx]==d[idx+1])
        {
            pre = idx;
            post = n-idx;
            ans += pre*post;
        }
        d[idx] = x;
        if(idx>1 && d[idx]==d[idx-1])
        {
            pre = idx-1;
            post = n-idx+1;
            ans -= pre*post;
        }
        if(idx<n && d[idx]==d[idx+1])
        {
            pre = idx;
            post = n-idx;
            ans -= pre*post;
        }
        cout << ans <<endl;
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
        Please_AC(t);
    return 0;
}
