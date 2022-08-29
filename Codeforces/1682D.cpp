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
ll n;
string s;
bool vis[limit];

void dfs(ll u)
{
    ll v = (u+1)%n;
    printf("%d %d\n", u+1, v+1);
    vis[v] = 1;
    if(s[v]=='0')  dfs(v);
}

void solve(ll tt)
{
    ll i,j,m,k,q;

    scanf("%d", &n);
    getchar();
    getline(cin, s);
    for(i=0; i<n+5; i++)  vis[i] = 0;
    ll ok=0;
    for(i=0; i<n; i++)
    {
        ok += s[i]-'0';
    }
    if(!ok || ok&1)
    {
        printf("NO\n");
        return ;
    }
    printf("YES\n");
    for(i=0; i<n; i++)
    {
        if(s[i]=='1')
        {
            ll u = (i+1)%n;
            vis[u] = 1;
            for(j=(u+1)%n,k=0; k<n; k++, j=(j+1)%n)
            {
                if(vis[j])  continue;
                ll v = j;
                printf("%d %d\n", u+1, v+1);
                vis[v] = 1;
                if(s[v]=='0')
                {
                    dfs(v);
                }
            }
            return ;
        }
    }
}


int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    scanf("%d", &tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
