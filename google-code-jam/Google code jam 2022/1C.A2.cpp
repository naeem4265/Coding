#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;
bool ok;
bool vis[30];
bool take[10];
string s[10];
ll n;

void rec(ll pos, string t)
{
    if(ok) return ;
    if(pos==n)
    {   //cout <<t<<endl;
        memset(vis, 0, sizeof(vis));
        vis[t[0]-'A'] = 1;
        for(ll i=1; i<t.size(); i++)
        {
            if(vis[t[i]-'A'] && t[i]!=t[i-1])
                return ;
            vis[t[i]-'A'] = 1;
        }
        ok = 1;
        cout <<t<<endl;
        return ;
    }
    for(ll i=0; i<n; i++)
    {
        if(take[i]==0)
        {
            take[i]=1;
            string tt;
            tt = t+s[i];
            rec(pos+1,tt);
            take[i] = 0;
        }
    }
}

void solve(ll tt)
{
    ll i,j;
    cin >> n;
    memset(take, 0, sizeof(take));
    memset(vis, 0, sizeof(vis));
    ok = 0;
    for(i=0; i<n; i++)
        cin >> s[i];
    cout <<"Case #"<<tt<<": ";
    rec(0, "");
    if(ok==0)
    {
        cout <<"IMPOSSIBLE\n";
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
