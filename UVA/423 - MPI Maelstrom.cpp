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
ll cost[105][105],dis[105];

void bellmanford(ll n)
{
    ll i,j,k;
    for(k=1; k<=n; k++)         //iterate n times every edge
    {
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(i==j) continue;
                ll u = i,v = j;             // select every edge
                if(dis[v]>(dis[u]+cost[u][v]))
                    dis[v] = dis[u]+cost[u][v];
            }
        }
    }
    ll mn = 0;
    for(i=1; i<=n; i++)
    {
        if(mn<dis[i])
            mn = dis[i];
    }
    cout << mn <<endl;
}

void solve(int t)
{
    ll i,j,n,m,k;
    cin >> n ;
    string s;
    for(i=1; i<=n; i++)
    {
        for(j=1,k=0; j<i; j++,k++)
        {
            ll x=0;  k = 0;
            cin >> s;
            while(k<s.size() && s[k]>='0' && s[k]<='9')
            {
                x = x*10+s[k]-'0';
                k++;
            }
            if(x==0)
            {
                x = 1e18;
            }
            cost[i][j] = cost[j][i] = x;
            k++;
        }
        cost[i][i] = 0;
    }
//    for(i=1; i<=n; i++)
//    {
//        for(j=1; j<=n; j++) cout <<cost[i][j]<<" "; cout <<endl;
//    }
    for(i=0; i<=n; i++) dis[i] = 1e18;
    dis[1] = 0;
    bellmanford(n);

    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

