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
ll Fact(int n)
{
    if(n==0 || n==1)
        return 1;
    return n*Fact(n-1);
}
void solve(int t)
{
    ll i,j,n,m,dif,ans1=1,ans2=1;
    bool vis[10];
    ll A[10],B[10];
    cin >> n;
    for(i=1; i<=n; i++)
        cin >> A[i];
    for(i=1; i<=n; i++)
        cin >> B[i];
    for(i=0; i<10; i++)
        vis[i]=1;
    for(i=1; i<n; i++)
    {
        ll ct = 0;
        for(j=1; j<=n; j++)
        {
            if(j==A[i])
                break;
            if(vis[j])
                ct++;
        }
        vis[A[i]]=0;
        dif = ct*Fact(n-i);
        ans1 += dif;                     // cout <<i<<" "<<dif<<" "<<ans1<<endl;
    }
    for(i=0; i<10; i++)
        vis[i]=1;
    for(i=1; i<n; i++)
    {
        ll ct = 0;
        for(j=1; j<=n; j++)
        {
            if(j==B[i])
                break;
            if(vis[j])
                ct++;
        }
        vis[B[i]]=0;
        dif = ct*Fact(n-i);
        ans2 += dif;
    }                        // cout <<ans1<<" "<<ans2<<endl;
    cout <<abs(ans1-ans2)<<endl;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}


