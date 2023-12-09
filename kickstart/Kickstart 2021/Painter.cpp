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

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    cin >> s;
    bool ok[n+5][5];
    memset(ok,0,sizeof(ok));
    for(i=0; i<n; i++)
    {
        if(s[i]=='U') ok[i][0] = 1;
        if(s[i]=='R' || s[i]=='O' || s[i]=='P' || s[i]=='A') ok[i][1] = 1;
        if(s[i]=='Y' || s[i]=='O' || s[i]=='G' || s[i]=='A') ok[i][2] = 1;
        if(s[i]=='B' || s[i]=='P' || s[i]=='G' || s[i]=='A') ok[i][3] = 1;
    }
    bool com[n+5][6];
    memset(com,0,sizeof(com));

    ll ans=0;
    for(i=0; i<n; i++)
    {
        if(ok[i][0] || com[i][4]) continue;
        if(ok[i][1] && com[i][1]==0)
        {
            for(j=i; j<n; j++)
            {
                if(ok[j][1])
                {
                    com[j][1] = 1;
                }
                else
                    break;
                for(k=1; k<4; k++)
                {
                    if(ok[j][k] && com[j][k]==0) break;
                }
                if(k==4)
                    com[j][k] = 1;
            }
            ans++;
        }
        if(ok[i][2] && com[i][2]==0)
        {
            for(j=i; j<n; j++)
            {
                if(ok[j][2])
                {
                    com[j][2] = 1;
                }
                else
                    break;
                for(k=1; k<4; k++)
                {
                    if(ok[j][k] && com[j][k]==0) break;
                }
                if(k==4)
                    com[j][k] = 1;
            }
            ans++;
        }
        if(ok[i][3] && com[i][3]==0)
        {
            for(j=i; j<n; j++)
            {
                if(ok[j][3])
                {
                    com[j][3] = 1;
                }
                else
                    break;
                for(k=1; k<4; k++)
                {
                    if(ok[j][k] && com[j][k]==0) break;
                }
                if(k==4)
                    com[j][k] = 1;
            }
            ans++;
        }
    }
    cout <<"Case #"<<tt<<": "<<ans<<endl;


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
