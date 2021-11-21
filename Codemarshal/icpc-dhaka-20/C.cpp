#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1008
#define inf 1e18
using namespace std;

long long int seed;
char maze[2021][2021];

void update_seed()
{
    seed = (seed * 1000003 + 10007) % 1000000009;
}

ll N,M;

void gen_maze(ll N, ll M, ll Cx, ll Cy, ll Mx, ll My)
{
    for (ll i = 1; i <= N; ++i)
    {
        for (ll j = 1; j <= M; ++j)
        {
            if ((i==Cx && j==Cy) || (i==Mx && j==My))
            {
                maze[i][j] = '.';
                continue;
            }
            update_seed();
            ll power = (int)seed % 63;
            if (power == 0)
                maze[i][j] = '.';
            else if (power <= 26)
                maze[i][j] = power - 1 + 'a';
            else if (power <= 52)
                maze[i][j] = power - 27 + 'A';
            else
                maze[i][j] = power - 53 + '0';
        }
    }
}

ll fx[] = {1,0,-1,0};
ll fy[] = {0,-1,0,1};

ll cost[limit][limit];
bool vis[limit][limit];

void bfs(ll xx, ll yy)
{
    ll i;
    cost[xx][yy] = 0;

    priority_queue< pair<ll, pair<ll,ll> > > q;

    q.push(mp(-0,mp(xx,yy)));

    while(!q.empty())
    {
        xx = (q.top().second).first;
        yy = (q.top().second).second;
        vis[xx][yy] = 1;
        ll w = cost[xx][yy];

         //cout << q.top().first<<endl;
        q.pop();

        for(i=0; i<4; i++)
        {
            ll x = xx+fx[i];
            ll y = yy+fy[i];
            if(x> 0 && x<=N && y>0 && y<=M && vis[x][y]==0)
            {
                ll ct = 1;
                vis[x][y] = 1;
                if(maze[x][y]=='.')
                    ct = 1;
                else if(maze[x][y]>='a' && maze[x][y]<='z')
                    ct += 1+maze[x][y]-'a';
                else if(maze[x][y]>='A' && maze[x][y]<='Z')
                    ct += 27+maze[x][y]-'A';
                else
                    ct += 53+maze[x][y]-'0';
                    // cout << x <<" "<< y <<" "<<w<<" "<< ct<<" "<<cost[x][y]<<" ";
                if(cost[x][y]> (ct+w))
                {
                    cost[x][y] = ct+w;
                }       //cout << cost[x][y] <<endl;
                q.push(mp(-(ct+w),mp(x,y)));
            }
        }
    }
}


void slove(ll tt)
{
    ll i,j,cx,cy,mx,my;
    scanf("%d %d %d %d %d %d", &N, &M, &cx, &cy, &mx, &my);
    scanf("%lld", &seed);

    memset(vis,0,sizeof(vis));
    for(i=0; i<limit; i++)
    {
        for(j=0; j<limit; j++)
        {
            cost[i][j] = Mod;
        }
    }

    gen_maze(N, M, cx, cy, mx, my);

//    for(i=1; i<=N; i++)
//    {
//        for(j=1; j<=M; j++)
//        {
//            cout <<maze[i][j]<<" ";
//        }
//        cout << endl;
//    }

    cost[cx][cy] = 0;
    bfs(cx,cy);
    ll ans = cost[mx][my];
    //cout << ans << endl;
    printf("Case %d: ",tt);
    printf("%d\n", ans);
}

int main()
{
    ll t,tt;
    scanf("%d", &tt);
    for(t=1; t<=tt; t++)
        slove(t);
	return 0;
}


