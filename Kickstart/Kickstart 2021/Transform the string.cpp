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
    string s,t;
    cin >> s >> t;
    bool vis[30];
    memset(vis,0,sizeof(vis));

    for(i=0; i<t.size(); i++)
        vis[t[i]-'a'] = 1;
    ll ans =0,ct;
    for(i=0; i<s.size(); i++)
    {
        for(j=s[i]-'a',k=s[i]-'a',ct=0; ; j++,k--,ct++)
        {
            if(j==26) j=0;
            if(k<0) k=25;
            if(vis[j] || vis[k])
            {
                ans += ct;
                break;
            }
        }
    }
    cout <<"Case #"<<tt<<": "<<ans<<endl;

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
