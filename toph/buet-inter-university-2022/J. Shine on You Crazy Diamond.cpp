#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;
ll fre[limit];
vector<pair<ll,ll> > v;

bool vis[limit];
vector<ll>prime;
void seive()
{
    long long int i,j;
    vis[0]=vis[1]=1;
    for(i=4; i<limit; i+=2) vis[i] = 1;
    for(i=3; i*i<limit; i+=2)
    {
        if(vis[i]) continue;
        for(j=i*i; j<limit; j+=2*i)
        {
            vis[j] = 1;
        }
    }
    prime.pb(2);
    for(ll j=3; j<limit; j+=2)
        if(vis[j]==0)
            prime.pb(j);
}

void Please_AC(ll tt)
{
    ll n,m,k,q;
    long long int i,j;
    cin >> n;
    ll d;
    for(j=0; j<n; j++)
    {
        cin >> d;
        for(i=1; i*i<=d; i++)
        {
            if(d%i)  continue;
            fre[i]++;
            if(i*i !=d )
                fre[d/i]++;
        }
    }
    m = prime.size();  //cout <<m<<endl;
    for(i=0; i<m; i++)
    {
        v.pb({fre[prime[i]], prime[i]});
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    ll ans =0,p1=2,p2=3,ct;
    for(i=0; i<m; i++)
    {
        for(j=i+1; j<m; j++)
        {
            ct = v[i].first+v[j].first;
            if(ct<=ans)  break;
            long long int x=v[i].second,y=v[j].second;
            if(x*y<limit)
                ct -= fre[x*y];
            if(ans<ct)
            {
                ans = ct;
                p1 = v[i].second;
                p2 = v[j].second;
            }
        }
    }
    cout <<n-ans<<endl<<p1<<" "<<p2<<endl;

    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    seive();
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
