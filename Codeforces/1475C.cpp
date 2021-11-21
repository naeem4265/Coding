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
    ll a,b;
    cin >> a >> b >> k;
    ll aa[k+5],bb[k+5];
    ll cnta[a+5], cntb[b+5];
    memset(cnta,0,sizeof(cnta));
    memset(cntb,0,sizeof(cntb));
    map<pair<ll,ll>,ll > cntp;

    for(i=0; i<k; i++)
    {
        cin >> aa[i];
        cnta[aa[i]]++;
    }

    for(i=0; i<k; i++)
    {
        cin >> bb[i];
        cntb[bb[i]]++;
        cntp[mp(aa[i],bb[i])]++;
    }
    ll ans = 0;
    for(i=0; i<k; i++)
    {
        cnta[aa[i]]--;
        cntb[bb[i]]--;
        cntp[mp(aa[i],bb[i])]--;
        ans += k-i-1-cnta[aa[i]]-cntb[bb[i]]+cntp[mp(aa[i],bb[i])];
        //cout <<cnta[aa[i]]<<" "<<cntb[bb[i]]<<" "<<cntp[mp(aa[i],bb[i])]<<" "<<ans<<endl;
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
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
