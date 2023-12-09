#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 30008
using namespace std;
bool vis[41][41][41][41];

ll n,A,B,ans;
string s,ss,sss;

void rec(ll pos, ll r, ll a, ll b)
{
    if(vis[pos][r][a][b]) return ;
    if(pos==n)
    {
        if(r==0 || r==n || a || b)
            return;
        if(ans>abs(r-n+r))
        {
            ans = abs(r-n+r);
            sss = ss;
        }
        return;
    }

    vis[pos][r][a][b] = 1;
    ss[pos] = 'R';
    rec(pos+1, r+1, (a*10+s[pos]-'0')%A, b);
    ss[pos] = 'B';
    rec( pos+1, r, a, (b*10+s[pos]-'0')%B);
}

void solve(ll t)
{
    ll i,j,m,k;
    cin >> n >> A >> B;
    cin >> s;
    ss = s;
    sss = s;

    ans = Mod;
    memset(vis,0,sizeof(vis));
    rec(0,0,0,0);
    if(ans>=Mod)
        cout <<-1<<endl;
    else
        cout <<sss<<endl;
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
