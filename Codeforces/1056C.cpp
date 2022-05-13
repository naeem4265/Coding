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

void solve(ll tt)
{
    ll i,j,n,m,k;

    cin >> n >> m;
    n += n;
    vector<pair<ll,ll> > v(n);
    queue<ll> q;
    for(i=0; i<n; i++)
    {
        cin >> v[i].first;
        v[i].second = i+1;
    }
    ll pr[n+5];
    memset(pr, -1, sizeof(pr));
    for(i=0; i<m; i++)
    {
        ll x,y;
        cin >> x >> y;
        pr[x] = y;
        pr[y] = x;
        if(v[x-1].first>=v[y-1].first)
            q.push(x);
        else
            q.push(y);
    }
    sort(v.begin(), v.end());
    cin >> tt;
    bool vis[n+5];
    memset(vis, 0, sizeof(vis));
    ll choosen = -1,x;
    if(tt==2)
    {
        cin >> x;
        vis[x] = 1;
        if(pr[x]!=-1)
            choosen = pr[x];
    }
    for(i=n/2,j=n-1; i>0; i--)
    {
        if(choosen!=-1)
        {
            cout <<choosen<<endl;
            vis[choosen] = 1;
        }
        else
        {
            bool ok = 0;
            while(!q.empty())
            {
                ll x = q.front();
                q.pop();
                if(vis[x])   continue;
                cout <<x<<endl;
                vis[x] = 1;
                ok = 1;
                break;
            }
            if(ok==0)
            {
                while(j>=0 && vis[v[j].second])
                    j--;
                cout <<v[j].second<<endl;
                vis[v[j].second] = 1;
            }
        }
        if(i==1 && tt==2)   break;
        cin >> x;
        vis[x] = 1;
        choosen = -1;
        if(pr[x]!=-1 && vis[pr[x]]==0)
            choosen = pr[x];
    }
    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
