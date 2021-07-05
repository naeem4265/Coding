#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 10008
using namespace std;

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
ll bigmod(ll b,ll p)
{
    ll ans=1;
    while(p)
    {
        if(p&1)
            ans = (ans*b)%Mod;
        b = (b*b)%Mod;
        p = p/2;
    }
    return ans;
}

pair<ll,int> cnt[10000005];

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    for(i=0; i<10000005; i++)
    {
        cnt[i].first = Mod;
        cnt[i].second = 0;
    }

    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> m;
        for(j=0; j<m; j++)
        {
            ll x;
            cin >> x;
            for(k=0; prime[k]*prime[k]<=x; k++)
            {
                ll ct = 0;
                while(x%prime[k]==0)
                {
                    ct++;
                    x /= prime[k];
                }
                cnt[prime[k]].second++;
                if(cnt[prime[k]].first > ct)
                    cnt[prime[k]].first = ct;
            }
            if(x>1)
            {
                cnt[prime[k]].second++;
                if(cnt[prime[k]].first > 1)
                    cnt[prime[k]].first = 1;
            }
        }
    }
    ll ans = 1;
    for(i=0; i<10000005; i++)
    {
        if(cnt[i].second < n || cnt[i].first==0) continue;
        ans = (ans*bigmod(i,cnt[i].first))%Mod;            cout <<i<<" "<<cnt[i].second<<" "<< ans << endl;
    }
    cout << ans << endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    seive();
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
