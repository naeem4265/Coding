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
int fx[]={-1,0,1,0};
int fy[]={0,1,0,-1};
int cost[25][25];
char ch[25][25];
int h,w,mx;

void bfs(int i,int j)
{
    cost[i][j]=1;
    queue< pair<int,int> >Q;
    Q.push(mp(i,j));
    while(!Q.empty())
    {
        pair<int,int> z;
        z = Q.front();
        i = z.first;
        j = z.second;
        Q.pop();
        for(int l=0; l<4; l++)
        {
            int x=i+fx[l],y=j+fy[l];
            if(x>=0 && x<h && y>=0 && y<w && ch[x][y]=='.' && cost[x][y]==0)
            {
                cost[x][y] = cost[i][j]+1;   //cout <<i<<" "<<j<<" "<<x<<" "<<y<<" "<<cost[x][y]<<endl;
                mx = max(mx,cost[x][y]-1);
                Q.push(mp(x,y));
            }
        }
    }
    return;
}
void solve(int t)
{
    int i,j;;
    cin >> h >> w ;
    for(i=0; i<h; i++)
    {
        for(j=0; j<w; j++)
        {
            cin >> ch[i][j];
        }
    }
    for(i=0; i<h; i++)
    {
        for(j=0; j<w; j++)
        {
            if(ch[i][j]=='.')
            {
                memset(cost,0,sizeof(cost));
                bfs(i,j);         //cout <<i<<" "<<j<<" "<<mx<<endl;
            }
        }
    }
    cout <<mx<<endl;
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

