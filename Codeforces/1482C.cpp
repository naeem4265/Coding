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

void solve(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n >> m;
    vector<ll> v[m+5];
    ll x;
    ll cnt[n+5],taken[n+5];

    memset(cnt,0,sizeof(cnt));
    memset(taken,0,sizeof(taken));

    for(i=0; i<m; i++)
    {
        cin >> k;
        for(j=0; j<k; j++)
        {
            cin >> x;
            v[i].pb(x);
            cnt[x]++;
        }
    }

    ll sum = 0,mx=0,key;
    for(i=1; i<=n; i++)
    {
        sum += cnt[i];
        if(mx<cnt[i])
        {
            mx = cnt[i];
            key = i;
        }
    }
    x = m/2;
    if(m&1) x++;
    if((sum-mx)<(m-x))
    {
        cout <<"NO\n";
        return ;
    }

    ll ans[m+5];
    memset(ans,0,sizeof(ans));
    for(i=0; i<m; i++)
    {
        if(v[i].size()==1)
        {
            taken[v[i][0]]++;
            if(taken[v[i][0]]>x)
            {
                cout <<"NO\n";
                return ;
            }
            ans[i] = v[i][0];
        }
    }
    for(i=0; i<m; i++)
    {
        if(ans[i]) continue;

        for(j=0; j<v[i].size(); j++)
        {
            if(v[i][j]==key && taken[key]<x)
            {
                ans[i] = key;
                taken[key]++;
                break;
            }
        }
    }
    for(i=0; i<m; i++)
    {
        if(ans[i]) continue;

        for(j=0; j<v[i].size(); j++)
        {
            if(v[i][j]!=key)
            {
                ans[i] = v[i][j];
                taken[v[i][j]]++;
                break;
            }
        }
    }
    cout <<"YES\n";
    for(i=0; i<m; i++)
        cout << ans[i] <<" ";
    cout <<endl;

    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
