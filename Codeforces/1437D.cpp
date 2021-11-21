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
int level[limit];

void solve(int t)
{
    int i,j,n,m,k,ans=0;
    cin >> n ;
    int D[n+5];
    D[n]=Mod;
    for(i=0; i<n ;i++)
    {
        cin >> D[i];
    }
    queue<int>q;
    q.push(1);
    level[1]=0;
    for(i=1; i<n; i++)
    {
        if(D[i-1]>D[i])
        {
            q.pop();
        }
        q.push(D[i]);
        t = q.front();
        level[D[i]] = level[t]+1;
        ans = max(ans,level[t]+1);
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

