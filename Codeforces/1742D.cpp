#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1008
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

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll d[n+5];

    vector<ll> v[limit];
    ll ans = -1;
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
        m = d[i];
        if(m==1)
            ans = max(ans, i+i);
        m = d[i];
        for(j=0; prime[j]*prime[j]<=m; j++)
        {
            bool ok=0;
            while(m%prime[j]==0)
            {
                m /= prime[j];
                ok = 1;
            }
            if(ok)
            {
                for(k=prime[j]; k<limit; k+=prime[j])
                    v[k].pb(i);
            }
        }
        if(m>1)
            for(k=m; k<limit; k+=m)
                v[k].pb(i);
    }

    for(i=n; i>0; i--)
    {
        m = v[d[i]].size();
        k = n;
        for(j=m-1; j>=0; j--)
        {
            if(v[d[i]][j]==k)  k--;   //cout <<v[d[i]][j]<<" "<<j<<endl;
        }
        if(k)  ans = max(ans, i+k);    //cout <<i<<" "<<k<<" "<<ans<<endl;
    }
    cout << ans <<endl;

    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    seive();
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
