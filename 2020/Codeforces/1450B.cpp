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
int n,k,x[105],y[105],mn;

int bfs(int u,int v)
{
    queue<pair<int,int> >q;
    q.push(mp(u,v));
    map<pair<int,int>,int >mymap;
    pair<int,int> z,w;
    z=q.front();
    mymap[z]=1;
    int ct=1;
    mn = Mod;

    z = q.front();
        q.pop();
        for(int i=0; i<n; i++)
        {
            w = mp(x[i],y[i]);
            if(mymap[w]) continue;
            int d=abs(z.first-x[i])+abs(z.second-y[i]);  //cout <<d<<" okkk "<<ct<<endl;
            if(d<=k)
            {
                ct++;
                mymap[w] = mymap[z]+1;
            }
        }
                //cout <<ct<<" return  "<<n<<endl;
    if(ct==n) return 1;
    else   return Mod;
}

void solve(int t)
{
    int i,j,ans=Mod;
    cin >> n >> k;
    for(i=0; i<n; i++)
        cin >> x[i] >> y[i];
    for(i=0; i<n; i++)
    {
        mn = bfs(x[i],y[i]);
        ans = min(ans,mn);  //cout <<i<<" here "<<ans<<endl;
    }
    if(ans<Mod)
        cout <<ans<<endl;
    else
        cout <<-1<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

