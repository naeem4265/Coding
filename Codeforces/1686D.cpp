#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;
string s;
bool vis[limit];
ll i,n;

bool tab(ll c)
{
    for(i=1; i<n; i++)
    {
        if(c==0)
            return 1;
        if(vis[i-1]==0 && vis[i] == 0 && s[i-1]=='A' && s[i]=='B')
        {
            vis[i-1] = vis[i] = 1;
            c--;
        }
    }
    return !c;
}
bool tba(ll c)
{
    for(i=1; i<n; i++)
    {
        if(c==0)
            return 1;
        if(vis[i-1]==0 && vis[i] == 0 && s[i-1]=='B' && s[i]=='A')
        {
            vis[i-1] = vis[i] = 1;
            c--;
        }
    }
    return !c;
}
bool ta(ll c)
{
    for(i=0; i<n; i++)
    {
        if(c==0)
            return 1;
        if(vis[i] == 0 && s[i]=='A')
        {
            vis[i] = 1;
            c--;
        }
    }
    return !c;
}
bool tb(ll c)
{
    for(i=0; i<n; i++)
    {
        if(c==0)
            return 1;
        if(vis[i] == 0 && s[i]=='B')
        {
            vis[i] = 1;
            c--;
        }
    }
    return !c;
}

void solve(ll tt)
{
    ll i,j,m,k,q;

    ll a1,b1,c1,d1,a2,b2,c2,d2;
    cin >> a1 >> b1 >> c1 >> d1;
    cin >> s;
    n = s.size();
    for(i=0; i<n+5; i++)
    {
        vis[i] = 0;
    }
    bool ct= 1;
    ct = ct&tab(c1);
    ct = ct&tba(d1);
    ct = ct&ta(a1);
    ct = ct&tb(b1);
    if(ct)
    {
        cout <<"YES\n";
        return ;
    }
    ct = 1;
    for(i=0; i<n+5; i++)
    {
        vis[i] = 0;
    }
    ct = ct&tba(d1);
    ct = ct&tab(c1);
    ct = ct&ta(a1);
    ct = ct&tb(b1);
    if(ct)
    {
        cout <<"YES\n";
        return ;
    }


    cout <<"NO\n";
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
