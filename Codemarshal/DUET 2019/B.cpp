#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

bool vis[limit];
vector<int>prime;
void seive()
{
    vis[0]=vis[1]=1;
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

vector<ll> pdivisor[limit];
void Set()
{
    for(ll i=0; prime[i]*prime[i]<limit; i++)
    {
        for(ll j=prime[i]; j<limit; j+=prime[i])
            pdivisor[j].pb(prime[i]);
    }
}

ll costpos[200005];
ll ct[limit];
deque<pair<ll,ll > >cost[limit];
pair<ll,ll> z;

void solve(ll t)
{
    ll i,j,n,k,p;
    //cin >> n >> k;
    scanf("%d %d",&n, &k);

    ll D[n+5];
    for(i=1; i<=n; i++)
    {
        scanf("%d",&D[i]);

        for(j=pdivisor[D[i]].size()-1; j>=0; j--)
        {
            p = pdivisor[D[i]][j];
            ct[p] = 0;
            cost[p].clear();
        }
    }

    costpos[n] = 0;

    for(j=pdivisor[D[n]].size()-1; j>=0; j--)
    {
        p = pdivisor[D[n]][j];
        cost[p].push_back({0,n});
        ct[p]++;
    }

    for(i=n-1; i>0; i--)
    {
        if((i+k)<n)
        {
            for(j=pdivisor[D[i+k+1]].size()-1; j>=0; j--)
            {
                p = pdivisor[D[i+k+1]][j];
                if(ct[p])
                {
                    z = cost[p].front();
                    if(z.second>(i+k))
                    {
                        cost[p].pop_front();           //cout <<i<<" poped "<<i+k<<" "<<n<<endl;
                        ct[p]--;
                    }
                }
            }
        }

        ll x = costpos[i+1]+1;
        ll sz = pdivisor[D[i]].size();
        for(j=sz-1; j>=0; j--)
        {
            p = pdivisor[D[i]][j];
            if(ct[p])
            {
                z = cost[p].front();
                if(x > z.first+1 )
                    x = z.first+1;
            }             //cout << i <<" "<<p<<" "<<x<<" "<<z.first<<endl;
        }
        costpos[i] = x;

        for(j=sz-1; j>=0; j--)
        {
            p = pdivisor[D[i]][j];

            while(ct[p])
            {
                z = cost[p].back();
                if(z.first < x) break;
                cost[p].pop_back();
                ct[p]--;
            }
            cost[p].push_back({x,i});
            ct[p]++;
        }        //cout <<i <<" "<<costpos[i] << endl;
    }

    //cout <<"Case "<<t<<": "<<ans[n] <<endl;
    printf("Case %d: %d\n",t,costpos[1]);
}
int  main()
{
//    Fast
//    Freed
//    Fout
    seive();
    Set();
    int t,tt=1;
    //cin >> tt;
    scanf("%d",&tt);
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}
/*
1
9 4
13 5 9 11 8 7 24 18 23
*/
