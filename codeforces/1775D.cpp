#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pi acos(-1.0)
const ll limit = 3e5+5;
const ll Mod = 1e9+7;
using namespace std;
vector<ll> Link[limit];

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    ll d[n+5];
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
        m = d[i];
        vector<ll> v;
        for(j=2; j*j<=m; j++)
        {
            if(m%j)  continue;
            while(m%j)  m /= j;
            v.push_back(j);
        }
        for(i=0; i<v.size(); i++)
        {
            for(j=i+1; j<v.size(); j++)
            {
                Link[v[i]].push_back(v[j]);
                Link[v[j]].push_back(v[i]);
            }
        }
    }
    cin >> i >> j;
    queue <pair<ll,ll> > Q;
    bool vis[limit];
    m = d[i];
    for(j=2; j*j<=m; j++)
    {
        if(m%j)  continue;
        while(m%j)  m /= j;
        Q.push({j, 0});
        vis[j] = 1;
    }
    while(!Q.empty())
    {
        pair<ll,ll> a;
        a = Q.front();

        Q.pop();
        if(d[j]%a.first==0)
        {
            cout << 1+a.second <<endl;
            return;
        }
        for(i=0; i<Link[a.first].size(); i++)
        {
            if(vis[Link[a.first][i]])  continue;
            vis[Link[a.first][i]] = 1;
            Q.push({Link[a.first][i], 1+a.second});
        }
    }
    cout << -1 <<endl;

    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

