#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 508
using namespace std;
ll fx[]={0,-1,+1,0};
ll fy[]={-1,0,0,+1};
ll vis[limit][limit];
ll n,ct;

void st(ll u,ll v,ll key)
{
    for(ll i=0; i<4; i++)
    {
        if(ct==0) break;
        ll x,y;
        x = u+fx[i];
        y = v+fy[i];
        if(x>0 && x<=n && y>0 && y<=n && vis[x][y]==0 && ct)
        {
            vis[x][y] = key;
            ct--;
            st(x,y,key);
        }
    }
}

void solve(ll t)
{
    ll i,j;
    cin >> n ;
    for(i=1; i<=n; i++)
    {
        for(j=i+1; j<=n; j++)
            vis[i][j] = Mod;
    }

    for(i=1; i<=n; i++)
        cin >> vis[i][i];

    for(i=1; i<=n; i++)
    {
        ct = vis[i][i]-1;
        st(i,i,vis[i][i]);
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
            cout << vis[i][j] <<" ";
        cout <<endl;
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
