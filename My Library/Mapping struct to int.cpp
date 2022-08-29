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

struct pos
{
    int cx,cy,nx,ny;
};
bool operator< (pos a,pos b )
{             ///there are lots of fact for this return
    if(a.cx!=b.cx) return a.cx<b.cx;
    else if(a.cy!=b.cy) return a.cy<b.cy;
    else if(a.nx!=b.nx) return a.nx<b.nx;
    else return a.ny<b.ny;
}

void solve(int t)
{
    int i,j,n,m,k=0,x=0,y=0;
    pos p;
    string s;
    cin >> s ;
    n = s.size();
    int ans=0;
    map <pos,bool> vis;
    vis.clear();
    for(i=0; i<n; i++)
    {
        int add=0;
        p.cx=x;
        p.cy=y;
        if(s[i]=='E') x++;
        else if(s[i]=='W') x--;
        else if(s[i]=='N') y--;
        else  y++;
        p.nx=x;
        p.ny=y;
        if(vis[p])
            add = 1;
        vis[p] = 1;
        swap(p.cx,p.nx);
        swap(p.cy,p.ny);
        if(vis[p])
            add = 1;
        vis[p] = 1;
        if(add==0) add = 5;
        ans += add;
    }
    cout <<ans<<endl;
    return ;
}
///https://codeforces.com/problemset/problem/1351/C
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

