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
    cin >> n >> m;
    ll l[m+5], r[m+5];
    for(i=0; i<m; i++)
    {
        cin >> l[i] >> r[i];
    }
    cin >> q;
    ll one[q+5];
    for(i=0; i<q; i++)
    {
        cin >> one[i];
    }
    ll lo=0,hi=q-1, ans = -1;
    bool vis[n+5];
    memset(vis, 0, sizeof(vis));
    while(lo<=hi)
    {
        ll mid = (lo+hi)/2;
        for(i=0; i<=mid; i++)   vis[one[i]] = 1;
        ll csum[n+5];
        csum[0] = 0;
        for(i=1; i<=n; i++)
        {
            csum[i] = csum[i-1];
            if(vis[i])   csum[i]++;
        }
        for(i=0; i<m; i++)
        {
            ll d = r[i]-l[i]+1;
            d = d/2;       //cout <<m<<" "<<i<<" "<<d<<" "<<csum[r[i]]<<" "<<csum[l[i]-1]<<endl;
            if((csum[r[i]]-csum[l[i]-1])>d)
            {
                ans = mid+1;
                hi = mid-1;
                break;
            }
        }
        if(i>=m)  lo = mid+1;
        for(i=0; i<=mid; i++)   vis[one[i]] = 0;
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
