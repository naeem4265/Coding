#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;
ll sum[limit],mn[limit];

void update(ll at, ll L, ll R, ll idx, ll key)
{
    if(idx>R || idx<L)  return;
    if(L==R)
    {
        sum[at] = key;
        mn[at] = key;
        return ;
    }
    update(2LL*at, L, (L+R)/2, idx, key);
    update(2LL*at+1, 1+(L+R)/2, R, idx, key);
    sum[at] = sum[2LL*at]+sum[2LL*at+1];
    mn[at] = min(mn[at*2LL], mn[at*2LL+1]);
}
pair<ll,ll> query(ll at, ll l, ll r, ll L, ll R)
{
    if(L>=l && R<=r)   return {sum[at], mn[at]};
    if(R<l || L>r)   return {0, 1e18};
    pair<ll,ll> x = query(at*2LL, l, r, L, (L+R)/2);
    pair<ll,ll> y = query(at*2LL+1, l, r, 1+(L+R)/2, R);
    return {x.first+y.first, min(x.second, y.second)};
}


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q, d;
    cin >> n >> q;
    for(i=0; i<4LL*n; i++)
    {
        sum[i] = 0;
        mn[i] = 1e18;
    }

    for(i=1; i<=n; i++)
    {
        cin >> d;
        update(1, 1, n, i, d);
        //pair<ll,ll> x = query(1, i, i, 1, n);      cout <<x.first<<" "<<x.second<<endl;
    }
    while(q--)
    {
        cin >> tt;
        if(tt==1)
        {
            cin >> i >> d;
            update(1, 1, n, i, d);
        }
        else
        {
            ll l,r;
            cin >> l >> r;
            pair<ll,ll> x = query(1, l, r, 1, n);
            cout <<x.first-x.second<<endl;
        }
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
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
