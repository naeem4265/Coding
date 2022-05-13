#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;
ll fx[] = {-1,0,1,0};
ll fy[] = {0,1,0,-1};

void solve(ll tt)
{
    ll i,j,k,n,m;
    ll x,y,u,v;
    cin >> n >> m;

    char ch[n+5][m+5];
    ll ct[n+5][m+5];
    memset(ct,0,sizeof(ct));

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin >> ch[i][j];
            if(ch[i][j]=='L')
            {
                x = i;
                y = j;
            }
        }
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            for(k=0; k<4; k++)
            {
                u = i+fx[k];
                v = j+fy[k];
                if(u>0 && u<=n && v>0 && v<=m && ch[u][v]!='#')
                    ct[i][j]++;
            }
        }
    }

    ct[x][y] = 0;
    queue<pair<ll,ll> >q;
    q.push({x,y});
    while(!q.empty())
    {
        pair<ll,ll> t;
        t = q.front();
        q.pop();
        x = t.first;
        y = t.second;
        for(k=0; k<4; k++)
        {
            u = x+fx[k];
            v = y+fy[k];
            if(u>0 && u<=n && v>0 && v<=m && ch[u][v]=='.')
            {
                ct[u][v]--;
                if(ct[u][v]<2)
                {
                    ch[u][v]='+';
                    q.push({u,v});
                }
            }
        }
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cout <<ch[i][j];
        }
        cout <<"\n";
    }
    return ;
}

int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
