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
bool vis[limit];

void solve(int t)
{
    ll i,j,n,m,k;
    cin >> n >> k;
    ll D[n+5];
    for(i=1; i<=n; i++)
        cin >> D[i];
    ll ans=1,sum=0,temp=Mod;
    for(j=n-k+1; j<=n; j++)
    {
        sum += j;
        vis[j] = 1;
    }
    for(i=1; i<=n; i++)
    {
        if(vis[D[i]])
        {
            if(temp==Mod) temp = i-1;
            ans = (ans*(i-temp))%Mod;
            temp = i;
        }
    }
    cout <<sum <<" "<<ans<<endl;
    return ;
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

