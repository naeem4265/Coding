#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e5+5;
const ll Mod = 1e9+7;
using namespace std;
bool vis[limit];

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    ll d[n+5];
    memset(vis, 0, sizeof(vis));
    bool ok = 0;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        if(vis[d[i]] && d[i]!=d[i-1])    ok = 1;
        vis[d[i]] = 1;
    }
    cout <<"Case #"<<tt<<": ";
    if(ok)
    {
        cout <<"IMPOSSIBLE"<<endl;
        return;
    }
    for(i=0; i<n; i++)
    {
        if(i && d[i-1]==d[i])    continue;
        cout <<d[i]<<" ";
    }
    cout <<endl;
    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

