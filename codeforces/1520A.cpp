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
    cin >> n ;
    bool vis[30];
    memset(vis,0,sizeof(vis));
    cin >> s;
    vis[s[0]-'A'] = 1;
    for(i=1; i<n; i++)
    {
        if(s[i-1]==s[i]) continue;
        if(vis[s[i]-'A'])
        {
            cout <<"NO\n";
            return ;
        }
        vis[s[i]-'A'] = 1;
    }
    cout << "YES\n";
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
