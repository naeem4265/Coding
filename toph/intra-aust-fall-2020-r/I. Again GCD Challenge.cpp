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
#define limit 200008
using namespace std;

bool vis[limit];
vector<int>pr[limit];

void seive()
{
    for(int i=2; i<limit; i+=2) pr[i].pb(2);

    for(int i=3; i<limit; i+=2)
    {
        if(vis[i]) continue;

        for(int j=i; j<limit; j += i)
        {
            pr[j].pb(i);
            vis[j] = 1;
        }
    }
}

void solve(ll t)
{
    memset(vis,0,sizeof(vis));
    ll i,j,n,m,k;
    string s;
    cin >> n >> m;

    ll d[n+5];
    ll l=0,ans =0;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        if( d[i]%m )
        {
            for(; l<=i; l++)
            {
                ll sz = pr[d[l]].size();
                for(k=0; k<sz; k++)
                {
                    vis[pr[d[l]][k]] = 0;
                }
            }
            continue;
        }
        if(d[i]==m)
        {
            if(ans < (i-l+1))
                ans = i-l+1;
            continue;
        }
        d[i] /= m;
        ll sz = pr[d[i]].size();
        for(k=0; k<sz; k++)
        {
            if( vis[pr[d[i]][k]] )
            {           //cout <<i<<" "<<d[i]<<" "<<pr[d[i]][k]<<" visited\n";
                for(; l<i; l++)
                {
                    bool ok=0;
                    ll sz2 = pr[d[l]].size();
                    for(j=0; j<sz2; j++)
                    {
                        if(pr[d[l]][j]==pr[d[i]][k])
                            ok = 1;
                        vis[pr[d[l]][j]] = 0;
                    }
                    if(ok)
                    {
                        l++;
                        break;
                    }
                }
            }
            vis[pr[d[i]][k]] = 1;
        }
        if(ans < (i-l+1) )
            ans = i-l+1;          //cout <<i<<" "<<l<<" "<<ans<<endl;
    }

    if(ans==1) ans = 0;

    cout << ans << endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    memset(vis,0,sizeof(vis));
    seive();
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
