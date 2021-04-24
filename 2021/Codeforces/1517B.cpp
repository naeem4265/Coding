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

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n >> m;
    ll d[n+3][m+3];
    bool vis[n+3][m+3];
    memset(d,0,sizeof(d));
    memset(vis,0,sizeof(vis));
    vector<ll> vec;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin >> d[i][j];
            vec.pb(d[i][j]);
        }
    }
    sort(vec.begin(),vec.end());

    vector<ll> out[m+1];

    for(k=0; k<m; k++)
    {
        bool ok = 0;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                if(ok) break;  //cout <<d[i][j]<<" "<<vec[k]<<endl;
                if(vis[i][j] == 0 && vec[k]==d[i][j])
                {
                    vis[i][j] = 1;
                    //cout <<d[i][j]<<" ";
                    out[k].pb(d[i][j]);
                    ok = 1;
                    j = m+5;
                    break;
                }
            }
            if(j>m+1) continue;
            ll ind=0;
            for(j=1; j<=m; j++)
            {
                if(d[i][ind]<d[i][j] && vis[i][j]==0)
                    ind = j;
            }
            //cout <<d[i][ind]<<" ";
            out[k].pb(d[i][ind]);
            vis[i][ind] = 1;
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cout <<out[j][i]<<" ";
        }
        cout <<endl;
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
