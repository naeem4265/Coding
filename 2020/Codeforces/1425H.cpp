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

void solve(int t)
{
    int a,b,c,d,i;
    bool vis[6];
    memset(vis,0,sizeof(vis));
    cin >> a >> b >> c >> d ;
    if((a+b)&1)
    {
        if(a || d)
        {
            vis[1]=1;
        }
        if(b || c)
            vis[2]=1;
    }
    if((a+b)%2==0)
    {
        if(a || d)
        {
            vis[4]=1;
        }
        if(b || c)
            vis[3]=1;
    }
    for(i=1; i<=4; i++)
    {
        if(vis[i])
            cout <<"Ya";
        else
            cout <<"Tidak";
        if(i<4) cout <<" ";
    }
    cout <<endl;
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

