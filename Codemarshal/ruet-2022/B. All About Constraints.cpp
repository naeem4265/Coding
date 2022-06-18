#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll unsigned long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;


void solve(ll tt)
{
    ll i,j,n,m,k,q;
    //scanf("%llu %llu", &n, &q);
    cin >> n >> q;
    ll d[n+5];
    memset(d, -1, sizeof(d));

    vector<pair<ll,ll> > v(q);
    for(i=0; i<q; i++)
    {
        //scanf("%llu %llu", &v[i].first, &v[i].second);
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());

    //printf("Case %llu:\n",tt);
    cout <<"Case "<<tt<<":\n";
    for(i=0; i<q; i++)
    {
        ll l = v[i].first-1;
        ll r = v[i].second-1;
        if((r-l+1)>64LLU)
        {
            //printf("Impossible\n");
            cout <<"Impossible\n";
            return ;
        }
        bool vis[68];
        memset(vis, 0, sizeof(vis));
        for(j=l,k=0; j<=r; j++)
        {
            while(vis[k]) k++;
            if(d[j]==-1)
            {
                d[j] = k;
                vis[k] = 1;
            }
            else
            {
                vis[d[j]] = 1;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        if(d[i]==-1)
            d[i] = 0;
    }
    ll one = 1;
    for(i=0; i<n; i++)
    {
        //printf("%llu", one<<d[i]);
        cout << (one<<d[i]);
        if(i<(n-1)) cout <<" ";  else  cout <<endl;
//        if(i<(n-1))
//            printf(" ");
//        else
//            printf("\n");
    }
    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //scanf("%llu", &tt);
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
