#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 31630;
const ll Mod = 1e9+7;
using namespace std;

bool vis[limit];
vector<ll>prime;
void seive()
{
    vis[0]=vis[1]=1;
    for(ll i=4; i<limit; i+=2) vis[i] = 1;
    for(ll i=3; i*i<limit; i+=2)
    {
        if(vis[i]) continue;
        for(ll j=i*i; j<limit; j+=2*i)
        {
            vis[j] = 1;
        }
    }
    prime.pb(2);
    for(ll j=3; j<limit; j+=2)
        if(vis[j]==0)
            prime.pb(j);
}

map<ll,bool> mp;

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    ll d[n+5];

    mp.clear();
    m = prime.size();

    bool ok = 0;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        for(j=0; prime[j]*prime[j]<=d[i]; j++)
        {
            bool x = 0;
            while(d[i] % prime[j]==0)
            {
                d[i] /= prime[j];
                x = 1;
            }
            if(x)
            {
                if(mp[prime[j]])  ok =1;
                mp[prime[j]] = 1;
            }
        }
        if(d[i]>1)
        {
            if(mp[d[i]])  ok = 1;
            mp[d[i]] = 1;
        }        //cout <<i<<" "<<ok<<endl;
    }

    if(ok)
        cout <<"YES\n";
    else
        cout <<"NO\n";

    return ;
}


int  main()
{
    Fast
    ll t,tt=1;
    seive();   //cout <<prime.size() <<endl;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

