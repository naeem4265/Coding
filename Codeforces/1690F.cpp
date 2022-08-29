#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll unsigned long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

ll GCD(ll x, ll y)
{
    if(y==0)  return x;
    return GCD(y, x%y);
}

ll LCM(ll x, ll y)
{
    return (x*y)/GCD(x,y);
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    cin >> s;

    ll d[n+5];
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
    }

    bool vis[n+5];
    memset(vis, 0, sizeof(vis));
    ll ans = 1;
    for(i=1; i<=n; i++)
    {
        if(vis[i])  continue;
        string v="";
        v+=s[i-1];
        vis[i] = 1;
        ll next = d[i];
        while(vis[next]==0)
        {
            v+=s[next-1];
            vis[next] = 1;
            next = d[next];
        }
        map<string, bool> mp;
        mp[v] = 1;
        char ch = v[0];
        ll sz = v.size();
        ll ct = 1;
        for(j=1; j<sz; j++)
            v[j-1] = v[j];
        v[j-1] = ch;
        while(mp[v]==0)
        {
            ch = v[0];
            for(j=1; j<sz; j++)
                v[j-1] = v[j];
            v[j-1] = ch;
            ct++;
        }
        ans = LCM(ans, ct);
    }
    cout << ans <<endl;
    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;   //cout <<GCD(4,6)<<endl;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
