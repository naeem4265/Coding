#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 208
using namespace std;
ll R[limit],G[limit],B[limit];
ll ans[limit][limit][limit];
ll dp(int r,int g,int b)
{
    ll x=0,y=0,z=0,ret; //cout <<r<<" "<<g<<" "<<b<<endl;
    if(!(r|g) || !(r|b) || !(g|b))
    {
        return 0;
    }
    if(ans[r][g][b])
        return ans[r][g][b];
    if(r&&g)
    {
        x = dp(r-1,g-1,b)+R[r]*G[g];
    }
    if(g&&b)
    {
        y = dp(r,g-1,b-1)+G[g]*B[b];
    }
    if(r&&b)
    {
        z = dp(r-1,g,b-1)+R[r]*B[b];
    }
    ret = max(x,max(y,z));  // cout <<x<<" "<<y<<" "<<z<<" "<<ret<<endl;
    ans[r][g][b]=ret;
    return ret;
}
void solve(int t)
{
    ll r,g,b,a,i,ans=0,mx1,mx2;
    cin >> r >> g >> b;
    for(i=1; i<=r; i++)
    {
        cin >> R[i];
    }
    for(i=1; i<=g; i++)
    {
        cin >> G[i];
    }
    for(i=1; i<=b; i++)
    {
        cin >> B[i];
    }
    sort(R+1,R+r+1);
    sort(G+1,G+g+1);
    sort(B+1,B+b+1);
    cout <<dp(r,g,b)<<endl;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
 //   cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}


