#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 2008
using namespace std;
int h,w,lev[limit][limit];
vector<pair<int,int> >ct[150];
string s[limit];
bool vis[limit][limit];
int ans=-1;

void rec(int i,int j)
{
    queue<pair<int,int> >Q;
    Q.push(mp(i,j));
    while(!Q.empty())
    {
        pair<int,int> x;
        x = Q.front();
        Q.pop();
        i = x.first;
        j = x.second;   //cout <<i<<" "<<j<<' '<<lev[i][j]<<endl;
        if(s[i][j]=='G')
        {
            ans = lev[i][j];
            return;
        }
        if(i && vis[i-1][j]==0)
        {
            vis[i-1][j] = 1;
            Q.push(mp(i-1,j));
            lev[i-1][j] = lev[i][j]+1;
        }
        if(j && vis[i][j-1]==0)
        {
            vis[i][j-1] = 1;
            Q.push(mp(i,j-1));
            lev[i][j-1] = lev[i][j]+1;
        }
        if(i+1<h && vis[i+1][j]==0)
        {
            vis[i+1][j] = 1;
            Q.push(mp(i+1,j));
            lev[i+1][j] = lev[i][j]+1;
        }
        if(j+1<w && vis[i][j+1]==0)
        {
            vis[i][j+1] = 1;
            Q.push(mp(i,j+1));
            lev[i][j+1] = lev[i][j]+1;
        }
        if(s[i][j]>='a' && s[i][j]<='z')
        {
            for(int k=ct[s[i][j]-'a'].size()-1; k>=0; k--)
            {
                x = ct[s[i][j]-'a'][k];
                int u = x.first;
                int v = x.second;
                if(vis[u][v]==0)
                {
                    Q.push(mp(u,v));
                    vis[u][v]=1;
                    lev[u][v] = lev[i][j]+1;   //cout <<i<<" "<<j<<" "<<u<<" "<<v<<' '<<lev[i][j]<<" "<<lev[u][v]<<endl;
                }
            }
            ct[s[i][j]-'a'].clear();
        }
    }
}

void solve(int t)
{
    int i,j,n,m,k;
    cin >> h >> w ;
    for(i=0; i<h; i++)
    {
        cin >> s[i];
    }
    for(i=0; i<h; i++)
    {
        for(j=0; j<w; j++)
        {
            if(s[i][j]=='#')
                vis[i][j]=1;
            if(s[i][j]>='a' && s[i][j]<='z')
            {
                ct[s[i][j]-'a'].pb(mp(i,j));
            }
        }
    }
    for(i=0; i<h; i++)
    {
        for(j=0; j<w; j++)
        {
            if(s[i][j]=='S')
            {
                lev[i][j]=0;
                vis[i][j]=1;
                rec(i,j);
                cout <<ans<<endl;
                return ;
            }
        }
    }
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

