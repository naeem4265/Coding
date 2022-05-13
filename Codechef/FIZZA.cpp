#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 200002
using namespace std;
vector<int> v[limit];

void solve(int t)
{
    int i,j,n,m,k;
    for(i=0; i<limit; i++)
    {
        v[i].clear();
    }
    cin >> n ;
    for(i=0; i<n; i++)
    {
        cin >> m;
        v[m].pb(i);
    }
    int ans = 0;
    for(i=0; i<limit; i++)
    {
        int ct=0;
        int sz=v[i].size();
        for(j=1; j<sz; j++)
        {
            if((v[i][j]-v[i][j-1])<3)
                ct++;
            else
            {
                ans = max(ans,ct);
                ct = 0;
            }
        }
        ans = max(ans,ct);
    }
    cout <<ans<<endl;
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}


