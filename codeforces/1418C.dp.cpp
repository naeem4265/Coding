#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 200008
using namespace std;
bool D[limit];
int dp[limit],n;

int rec(int i)
{
    if(i>=n) return 0;
    if(dp[i]>-1) return dp[i];
    int x,y,z,t=0;
    if(D[i]) t=1;
    x = rec(i+2);
    y = rec(i+3);
    if(D[i+1])
        z = 1+rec(i+4);
    else
        z = rec(i+4);
    dp[i] = ((D[i]?1:0)+min(x,min(y,z)));
    return dp[i];
}

void solve(int t)
{
    int i,j,m;
    cin >> n;
    for(i=0; i<n+5; i++) dp[i] = -1;
    for(i=0; i<n; i++)
        cin >> D[i];
    D[n]=D[n+1]=D[n+2]=D[n+3]=D[n+4]=0;
    cout << rec(0) <<endl;
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

