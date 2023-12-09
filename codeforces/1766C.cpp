#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 2e5+5;
const ll Mod = 1e9+7;
using namespace std;
string s[2];
ll n;
ll dp[2][2][limit];
bool vis[2][limit];

ll rec(ll side, ll i, ll j)
{          //cout <<i<<" "<<j<<endl;
    if(j<0 || j>=n || vis[i][j] || s[i][j]=='W')   return 0;
    if(dp[side][i][j] != -1)    return dp[side][i][j];

    vis[i][j] = 1;
    ll ct;
    if(i==0)
    {
        ct = rec(1, i, j-1);
        ct = max(ct,rec(1, i, j+1));
        ct = max(ct,rec(0, i+1, j));
    }
    else
    {
        ct = rec(1, i, j-1);
        ct = max(ct,rec(1, i, j+1));
        ct = max(ct,rec(0, i-1, j));
    }
    vis[i][j] = 0;

    return dp[side][i][j] = 1+ct;
}

void Please_AC(ll tt)
{
    ll i,j;
    cin >> n;
    cin >> s[0] >> s[1];

    for(i=0; i<=n; i++)
    {
        vis[0][i] = vis[1][i] = 0;
        dp[0][0][i] = dp[0][1][i] = dp[1][0][i] = dp[1][1][i] = -1;
    }

    ll cnt = 0;
    for(i=0; i<n; i++)   if(s[0][i]=='B')  cnt++;
    for(i=0; i<n; i++)   if(s[1][i]=='B')  cnt++;

    for(i=0; i<n; i++)
    {
        if(s[0][i]=='W'  && s[1][i]=='B')
        {
            vis[1][i] = 1;      //cout <<rec(1, i-1)<<" "<<rec(1, i+1) <<endl;
            if((cnt-1)==(rec(1, 1, i-1)+rec(1, 1, i+1)))
            {
                cout <<"YES\n";
                return;
            }
            else
            {
                cout <<"NO\n";
                return;
            }
        }
        if(s[1][i]=='W'  && s[0][i]=='B')
        {
            vis[0][i] = 1;
            if((cnt-1)==(rec(1, 0, i-1)+rec(1, 0, i+1)))
            {
                cout <<"YES\n";
                return;
            }
            else
            {
                cout <<"NO\n";
                return;
            }
        }
    }
    cout <<"YES\n";
    return ;
}


int  main()
{
    Fast
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

