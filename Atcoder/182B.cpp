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
int ct[limit];

bool vis[limit];
void seive()
{
    vis[0]=vis[1]=1;
    for(int i=4; i<limit; i+=2) vis[i] = 1;
    for(int i=3; i*i<limit; i+=2)
    {
        if(vis[i]) continue;
        for(int j=i*i; j<limit; j+=2*i)
        {
            vis[j] = 1;
        }
    }
}

void solve(int t)
{
    int i,j,n,m,k;
    cin >> n ;
    for(i=0; i<n; i++)
    {
        cin >> m;
        for(j=2; j*j<=m; j++)
        {
            if(vis[j]==0 && m%j==0)
            {
                while(m%j==0)
                {
                    m/=j;
                }
                ct[j]++;
            }
        }
        if(m>1) ct[m]++;
    }
    int ans = 0,mx=0;
    for(i=2; i<limit; i++)
    {
        if(mx<ct[i])
        {
            mx=ct[i];
            ans = i;
        }
    }
    cout <<ans<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    seive();
    int t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

