#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 27
using namespace std;
ll D[limit][limit];
ll Pow(ll x,ll y)
{
    if(y==0) return 1;
    ll z=Pow(x,y/2);
    z = z*z;
    if(y&1) z*=x;
    return z;
}
void dfs(ll x,ll y,ll cost)
{
    cost -= D[x][y];   ///cout <<x<<" "<<y<<' '<<cost<<endl;
    if(cost==0 && x==1 && y==1)
    {
        cout <<"1 1"<<endl;
        return ;
    }
    if(x&1)
    {
        if(cost>=D[x-1][y] && x>1)
            dfs(x-1,y,cost);
        else
            dfs(x,y-1,cost);
    }
    else
    {
        if(cost>=D[x][y-1] && y>1)
            dfs(x,y-1,cost);
        else
            dfs(x-1,y,cost);
    }

    cout <<x<<" "<<y<<endl;
    return ;
}
void solve(ll t)
{
    ll a,k=1,n,i,j,mx=0,q,x,y;
    cin >> n;
    D[0][2]=0;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i&1) D[i][j]=0;
            else
                D[i][j] = Pow(2,i+j);
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
            cout <<D[i][j]<<" ";
        cout<<endl;
    }
    fflush(stdout);
    cin >> q;
    while(q--)
    {
        cin >> a;
        dfs(n,n,a);
    }
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
 //   cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}


