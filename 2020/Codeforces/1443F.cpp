#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 998244353
#define limit 1000008
using namespace std;

void solve(int t)
{
    int i,j,n,m,k;
    cin >> n >> k;
    int A[n+5],B[k+5],L[n+5],R[n+5];
    bool vis[n+5];
    for(i=0; i<n+5; i++)
    {
        vis[i]=0;
    }
    for(i=1; i<=n; i++)
    {
        cin >> A[i];
    }
    A[0]=A[n+1]=0;
    vis[0]=1;
    for(i=1; i<=k; i++)
    {
        cin >> B[i];
        vis[B[i]]=1;
    }
    for(i=1; i<=n; i++)
    {
        L[A[i]]=A[i-1];
        R[A[i]]=A[i+1];
    }
    ll ans = 1;
    for(i=1; i<=k; i++)
    {
        m = B[i];
        if(vis[L[m]] && vis[R[m]])
        {
            cout <<0<<endl;
            return ;
        }
        if(vis[L[m]]==0 && vis[R[m]]==0)
        {
            ans = (ans*2)%Mod;
        }
        vis[m]=0;   //cout <<i<<" "<<m<<" "<<L[m]<<" "<<R[m]<<" "<<ans<<endl;
    }
    cout <<ans<<endl;
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

