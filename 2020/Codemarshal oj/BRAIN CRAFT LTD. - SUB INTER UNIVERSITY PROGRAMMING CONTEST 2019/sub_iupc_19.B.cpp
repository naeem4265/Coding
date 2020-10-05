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

void update(ll ind,ll l,ll r,ll L,ll R,ll x)
{
    if(L>r || R<l) return;
    if(L>=l && R<=r)
    {
        cnt[ind].pb(x);
        return ;
    }
    update(ind*2,l,r,L,(L+R)/2,x);
    update(ind*2+1,l,r,(L+R)/2+1,R,x);
}
ll query(ll ind,ll L,ll R,ll key)
{
    ll x=0,y;
    if(vis[ind]==0)
    {
        for(ll i=cnt[ind].size()-1; i>=0; i--)
        {
            y=__gcd(x,cnt[i]);
            x = (x*y)%Mod;
        }
    }
}

void solve(int t)
{
    ll i,j,n,m,q;
    cin >> n >> q;
    for(i=0; i<q; i++)
    {
        ll l,r,x,ind=1;
        cin >> l >> r >> x;
        update(ind,l,r,ind,n,x);
    }
    for(i=1; i<=n; i++)
    {
        ll ind;
        cout <<query(ind,ind,n,i)<<endl;
    }
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}


