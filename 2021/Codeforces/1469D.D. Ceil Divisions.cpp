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

void solve(ll tc)
{
    ll i,j,n,k;
    cin >> n ;
    vector<pair<ll,ll> > v;
    ll l,r=n,m=n;
    while(1)
    {
        l = sqrt(m);   //cout <<l<<" here "<<m<<endl;
        if(l==1) break;
        for(i=l+1; i<r; i++)
            v.pb(mp(i,n));
        v.pb(mp(n,l));
        if(m%l) m = 1+m/l;
        else m = m/l;
        r = l+1;
    }
    if(r>3) v.pb(mp(3,n));
    v.pb(mp(n,2));
    if(m==3)
        v.pb(mp(n,2));
    cout <<v.size()<<endl;
    for(i=0; i<v.size(); i++) cout <<v[i].first<<" "<<v[i].second<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
    cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

