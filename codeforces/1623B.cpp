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
#define limit 1008
using namespace std;

struct stc
{
    ll l,r,x,d;
};
bool operator<(stc a, stc b)
{
    return a.x<b.x;
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    bool vis[n+5];
    memset(vis,0,sizeof(vis));

    stc st[n+5];
    ll l,r;
    for(i=0; i<n; i++)
    {
        cin >> l >> r;
        st[i].x = r-l;
        st[i].l = l;
        st[i].r = r;
    }
    sort(st,st+n);
    for(i=0; i<n; i++)
    {
        l = st[i].l;
        r = st[i].r;
        for(j=l; j<=r; j++)
        {
            if(vis[j]==0)
            {
                st[i].d = j;
                vis[j] = 1;
                break;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        cout <<st[i].l<<" "<<st[i].r<<" "<<st[i].d<<endl;
    }
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
