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
int A[8],B[limit],n;

struct str
{
    int mn,mx;
};
str rec(int x,int y)
{
    str a,b;
    if(vis[x][y])
        return ;
    if(i==n-1)
    {
        a.mn = B[x]-A[y];
        a.mx = B[x]-A[y];
        return a;
    }
    for(int i=0; i<5; i++)
    {
        a = rec(x+1,i);
    }
}
void solve(int t)
{
    int i,j,m,k;
    for(i=0; i<6; i++)
        cin >> A[i];
    cin >> n ;
    for(i=0; i<n; i++)
        cin >> B[i];
    rec(0,0);      //cout <<B[n-1]<<" "<<A[5]<<" "<<B[0]<<" "<<A[0]<<endl;
    cout <<B[n-1]-A[5]-B[0]+A[0]<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
  //  cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

