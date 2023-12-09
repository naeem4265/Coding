#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;
vector<ll> cnt[limit];

bool vis[limit];
vector<int>prime;
void seive()
{
    vis[0]=vis[1]=1;
    for(int i=4; i<limit; i+=2) vis[i] = 1;
    for(int i=3; i*i<limit; i+=2)
    {
        if(vis[i]) continue;
        for(int j=i*i; j<limit; j+=2*i)
        {
            vis[j] = 1;
        }
    }
    prime.pb(2);
    for(int j=3; j<limit; j+=2)
        if(vis[j]==0)
            prime.pb(j);
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n >> k;
    for(i=0; i<n; i++)
    {
        cin >> m;
        for(j=0; prime[j]*prime[j]<=m; j++)
        {
            ll ct=0;
            while(m%prime[j]==0)
            {
                m /= prime[j];
                ct++;
            }
            if(ct)
            {
                cnt[prime[j]].pb(ct);
            }
        }
        if(m>1)
            cnt[m].pb(1);
    }
    ll ans = 0;
    for(i=0; i<prime.size(); i++)
    {
        ll del = 0,mx = 0;
        for(j=0; j<cnt[prime[i]].size(); j++)
        {
            if(mx<cnt[prime[i]][j])
                mx = cnt[prime[i]][j];
        }
        ll x = (mx/k)*k;
        for(j=0; j<cnt[prime[i]].size(); j++)
        {
            if(cnt[prime[i]][j]>x) del += cnt[prime[i]][j]-x;
        }
        //if(del || mx) cout <<prime[i]<<' '<<del<<" "<<mx<<endl;
        ans += min(del,(mx%k)?(k-mx%k):0);
    }
    cout << ans << endl;
    return ;
}

int  main()
{
//    Fast
//    Freed
//    Fout
    seive();
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
