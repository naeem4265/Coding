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
int dp[105][105];
int a[105],b[105],c[105],n;
vector<int>out;

bool rec(int i,int key)
{          // cout <<i<<" "<<key<<endl;
    if(i==n) return 1;
    if(dp[i][key]>=0) return dp[i][key];
    bool ok;
    if(key!=a[i])
    {
        if(i==n-1 && a[i]==out[0])
            dp[i][key]=-1;
        else
        {
            out.pb(a[i]);
            ok = rec(i+1,a[i]);
            dp[i][key] = ok;
            if(ok) return ok;
            dp[i][key]=-1;
            out.pop_back();
        }
    }
    if(key!=b[i])
    {
        if(i==n-1 && b[i]==out[0])
            dp[i][key]=-1;
        else
        {
            out.pb(b[i]);
            ok = rec(i+1,b[i]);
            dp[i][key]=ok;
            if(ok) return ok;
            dp[i][key]=-1;
            out.pop_back();
        }
    }
    if(key!=c[i])
    {
        if(i==n-1 && c[i]==out[0])
            dp[i][key]=-1;
        else
        {
            out.pb(c[i]);
            ok = rec(i+1,c[i]);
            dp[i][key]=ok;
            if(ok) return ok;
            dp[i][key]=-1;
            out.pop_back();
        }
    }
    dp[i][key]=0;
    return 0;
}

void solve(int t)
{
    int i,j,m,k;
    cin >> n ;
    for(i=0; i<n; i++)
        cin >> a[i];
    for(i=0; i<n; i++)
        cin >> b[i];
    for(i=0; i<n; i++)
        cin >> c[i];
    memset(dp,-1,sizeof(dp));
    out.clear();
    rec(0,0);
    for(i=0; i<out.size(); i++)
        cout <<out[i]<<" ";
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

