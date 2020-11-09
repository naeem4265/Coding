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
int n,D[6];
int rec(int pos,int f,int s)
{
    if(pos==n) return max(f,s);
    int x=rec(pos+1,f+D[pos],s);
    int y=rec(pos+1,f,s+D[pos]);
    return min(x,y);
}

void solve(int t)
{
    int i,j,m,k;
    cin >> n ;
    for(i=0; i<n; i++)
        cin >>D[i];
    cout <<rec(0,0,0)<<endl;
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

