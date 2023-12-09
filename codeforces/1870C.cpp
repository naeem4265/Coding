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
    ll a[n+5], l[n+5], r[n+5];
    bool vis[k+5];
    memset(vis, 0, sizeof(vis));

    l[0] = -1;
    r[n+1] = -1;
    for(i=1; i<=n; i++)
    {
        cin >> a[i];
        vis[a[i]]= 1;
        l[i] = max(a[i], l[i-1]);
    }
    for(i=n; i>0; i--)
    {
        r[i] = max(a[i], r[i+1]);
    }
    for(i=1; i<=k; i++)
    {
        if(vis[i]==0)
        {
            cout <<"0 ";
            continue;
        }
        ll lo = 0, hi = n+1,left=0,right=n+1;
        while(lo<=hi)
        {
            m = (lo+hi)/2;
            if(l[m]<i)
            {
                left = m;
                lo = m+1;
            }
            else
                hi = m-1;
        }
        lo = 0, hi = n+1;
        while(lo<=hi)
        {
            m = (lo+hi)/2;
            if(r[m]<i)
            {
                right = m;
                hi = m-1;
            }
            else
                lo = m+1;
        }
        cout << (right-left-1)*2LL<<" ";
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
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
