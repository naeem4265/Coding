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
bool vis[limit];
void solve(int t)
{
    int i,j,n,m,k;
    cin >> n >> k;
    int D[n+5];
    for(i=0; i<n; i++)
    {
        cin >> D[i];
    }
    m = k/2;
    if(k&1)
    {
        for(i=0; i<n; i++)
        {
            if(D[i]<=m)
                vis[i] = 0;
            else
                vis[i] = 1;
        }
        for(i=0; i<n; i++)
        {
            cout <<vis[i]<<" ";
        }
        cout <<endl;
        return ;
    }
    int ct=0;
    for(i=0; i<n; i++)
    {
        if(D[i]<m)
        {
            vis[i] = 0;
            ct++;
        }
        if(D[i]>m)
        {
            vis[i] = 1;
            ct++;
        }
    }
    ct = (n-ct)/2;
    for(i=0; i<n; i++)
    {
        if(D[i]==m)
        {
            if(ct)
            {
                vis[i] = 0;
                ct--;
            }
            else
                vis[i] = 1;
        }
    }
    for(i=0; i<n; i++)
    {
        cout <<vis[i]<<" ";
    }
    cout <<endl;
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

