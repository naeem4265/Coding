#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("xs_and_os_input.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll t)
{
    ll i,j,n,m,k;
    cin >> n;
    string s[n+5];
    for(i=0; i<n; i++)
        cin >> s[i];

    ll mx=Mod;
    for(i=0; i<n; i++)
    {
        ll ct=0;
        for(j=0; j<n; j++)
        {
            if(s[i][j]=='O')
                break;
            if(s[i][j]=='.')
                ct++;
        }
        if(j==n && mx>ct)
            mx = ct;
    }

    for(i=0; i<n; i++)
    {
        ll ct=0;
        for(j=0; j<n; j++)
        {
            if(s[j][i]=='O')
                break;
            if(s[j][i]=='.')
                ct++;
        }
        if(j==n && mx>ct)
            mx = ct;
    }

    cout <<"Case #"<<t<<": ";

    if(mx > n)
    {
        cout <<"Impossible\n";
        return ;
    }

    bool vis[n+5][n+5];
    memset(vis,0,sizeof(vis));

    ll ans = 0;
    for(i=0; i<n; i++)
    {
        ll ct=0;
        for(j=0; j<n; j++)
        {
            if(s[i][j]=='O')
                break;
            if(s[i][j]=='.')
                ct++;
        }
        if(j==n && mx==ct)
        {
            for(j=0; j<n; j++)
            {
                if(s[i][j]=='.')
                {
                    if(mx==1 && vis[i][j])
                        ct = -Mod;
                    vis[i][j] = 1;
                    ct--;
                }
            }
            if(j==n && ct==0)
                ans++;
        }
    }
    for(i=0; i<n; i++)
    {
        ll ct=0;
        for(j=0; j<n; j++)
        {
            if(s[j][i]=='O')
                break;
            if(s[j][i]=='.')
                ct++;
        }
        if(j==n && mx==ct)
        {
            for(j=0; j<n; j++)
            {
                if(s[j][i]=='.')
                {
                    if(mx==1 && vis[j][i])
                        ct = -Mod;
                    vis[j][i] = 1;
                    ct--;
                }
            }
            if(j==n && ct==0)
                ans++;
        }
    }

    cout <<mx<<" "<<ans<<endl;

    return ;
}
int  main()
{
    Fast
    Freed
    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
