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

struct st
{
    ll a,b;
};
bool operator<(st x, st y)
{
    if(x.b != y.b) return x.b < y.b;
    return x.a < y.a;
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n;
    st item[n+5];
    for(i=0; i<n; i++)
    {
        cin >> item[i].a >> item[i].b;
    }
    sort(item,item+n);
    ll ans = 0,x=0;
    for(i=0,j=n-1; i<=j; i++)
    {
        ll dif;
        while( j>=i && x < item[i].b)
        {
            dif = item[i].b - x;
            dif = min(dif,item[j].a);
            item[j].a -= dif;
            x += dif;
            ans += dif*2LL;
            if(item[j].a==0)
                j--;
        }
        dif = item[i].a;
        item[i].a = 0;
        x += dif;
        ans += dif;
    }
    cout << ans << endl;
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
