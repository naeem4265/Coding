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

struct st
{
    ll l,r,w;
};
bool operator<(st a, st b)
{
    if(a.l!=b.l) return a.l<b.l;
    return a.r<b.r;
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n ;
    for(i=0; i<n; i++)
        cin >> d[i];
    cin >> m;
    st q[m+2];
    for(i=0; i<m; i++)
    {
        cin >> a >> b >> c;
        q[i].l = max(1LL, a-c);
        q[i].r = a+c;
        q[i].w = b;
    }
    sort(q,q+m);
    sort(d,d+n);
    for(i=0; )
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
