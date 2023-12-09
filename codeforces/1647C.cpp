#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;
struct st
{
    ll xi,xj,yi,yj;
};

void solve(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n >> m;
    string s[n+5];
    for(i=0; i<n; i++)
    {
        cin >> s[i];
    }
    if(s[0][0]=='1')
    {
        cout <<-1<<endl;
        return ;
    }
    vector<st> ans;
    st z;
    for(i=n-1; i>=0; i--)
    {
        for(j=m-1; j>0; j--)
        {
            if(s[i][j]=='1')
            {
                z.xi = i+1;
                z.xj = j;
                z.yi = i+1;
                z.yj = j+1;
                ans.pb(z);
            }
        }
    }
    for(i=n-1; i>=0; i--)
    {
        if(s[i][0]=='1')
            {
                z.xi = i;
                z.xj = 1;
                z.yi = i+1;
                z.yj = 1;
                ans.pb(z);
            }

    }
    m = ans.size();
    cout <<m <<endl;
    for(i=0; i<m; i++)
    {
        cout <<ans[i].xi<<" "<<ans[i].xj<<" "<<ans[i].yi<<" "<<ans[i].yj<<endl;
    }

    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
