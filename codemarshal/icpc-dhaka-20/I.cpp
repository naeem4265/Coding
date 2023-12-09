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
#define inf 1e18
using namespace std;


struct stc
{
    ll l,r;
};

bool operator<(stc a,stc b)
{
    if(a.l>=b.l && a.r<=b.r) return true;
    if(a.l<=b.l && a.r>=b.r) return false;
    if(a.l < b.l) return a.l<b.l;
    return false;
}

void slove(ll tt)
{
    ll n,m,i,j,l,r;
    scanf("%lld %lld", &n, &m);
    stc d[n+5];

    ll ans = 0;
    for(i=0; i<n; i++)
    {
        ll p,l,r;
        scanf("%lld %lld %lld", &p, &l, &r);
        d[i].l = l;
        d[i].r = r;

        ans += p;
    }

    ll cost[m+5];
    for(i=1; i<=m; i++)
        scanf("%lld", &cost[i]);

    sort(d,d+n);

//    for(i=0; i<n; i++)
//    {
//        cout <<" list "<<d[i].l<<" "<<d[i].r<<endl;
//    }

    vector< pair<ll,ll> > v;
    v.pb(mp(d[0].l,d[0].r));
    l = d[0].l;
    r = d[0].r;

    for(i=1; i<n; i++)
    {
        if(d[i].l<=l && r <=d[i].r) continue;
        //if(d[i-1].l!=d[i].l)
            v.pb( mp(d[i].l,d[i].r));
            l = d[i].l;
            r = d[i].r;
    }

    ll sz = v.size();
    for(i=0; i<sz; i++)
    {
        l = v[i].first;
        r = v[i].second;  //cout <<i<<" check "<< l << " "<< r << endl;
        ll mn = inf;
        for(j=l; j<=r; j++)
        {
            if(mn > cost[j])
                mn = cost[j];
        }
        ans -= mn;
    }
    //cout << ans << endl;
    printf("Case %lld: ",tt);
    printf("%lld\n", ans);
}

int main()
{
    ll t,tt;
    scanf("%lld", &tt);
    for(t=1; t<=tt; t++)
        slove(t);
	return 0;
}
