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
void solve(int t)
{
    int i,j,n,m,ct=0,mx = 0,ans=0;
    cin >> m;
    int B[m+5],A[m+5],ind[limit],C[m+5];
    for(i=0; i<m; i++)
    {
        cin >> B[i];
        A[i]=B[i];
        C[i]=B[i];
        ind[B[i]]=i;
    }
    sort(B,B+m);
    for(i=m-1; i>=0; i--)
    {
        if(A[i]!=B[i])
        {
            ct++;
            swap(A[i],A[ind[B[i]]]);
        }
    }
    ans = ct;
    ct = 0;
    reverse(B,B+m);
    for(i=0; i<m; i++)
    {
        if(C[i]!=B[i])
        {
            ct++;
            swap(C[i],C[ind[B[i]]]);
        }
    }
    cout <<min(ans,ct)<<endl;
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




