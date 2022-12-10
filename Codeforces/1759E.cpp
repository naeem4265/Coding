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
ll n, d[limit];

ll rec(ll pos, ll g, ll b, ll h)
{
    if(pos==n)   return 0;

    if(d[pos]<h)
        return 1+rec(pos+1, g, b, h+d[pos]/2);
    ll ans = 0;
    if(g)
        ans = rec(pos, g-1, b, h*2LL);
    if(b)
        ans = max(ans, rec(pos, g, b-1, h*3LL));
    return ans;
}

void Please_AC(ll tt)
{
    ll i,j,h;
    cin >> n >> h;

    for(i=0; i<n; i++)  cin >> d[i];
    sort(d, d+n);
    cout << rec(0, 2, 1, h) <<endl;

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
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

