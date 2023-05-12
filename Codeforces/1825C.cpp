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
    cin >> n >> m;
    ll d[n+5];
    ll ct1 = 0, ct2=0, ct3= 0;
    bool vis[m+5];
    memset(vis, 0, sizeof(vis));
    vector<ll> v;

    for(i=0; i<n; i++)
    {
        cin >> d[i];
        if(d[i]==-1)  ct1++;
        else if(d[i]==-2)  ct2++;
        else
        {
            if(vis[d[i]]==0)
            {
                vis[d[i]] = 1;
                ct3++;
                v.pb(d[i]);
            }
        }
    }
    sort(v.begin(), v.end());

    ll ans = max(ct3+ct1, ct3+ct2);
    for(i=0; i<ct3; i++)
    {
        ans = max(ans, min(v[i]-1-i, ct1)+min(m-v[i]-(ct3-i-1), ct2)+ct3);
    }
    ans = min(ans, m);
    cout << ans <<endl;

    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

