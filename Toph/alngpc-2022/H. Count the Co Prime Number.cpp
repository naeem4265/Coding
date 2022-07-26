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
#define limit 300008
using namespace std;
ll d[limit],B[4*limit];

///segupdate O(logn)
void update(ll at,ll L,ll R,ll l,ll r,ll s)
{         //cout <<at<<" "<<L<<" "<<R<<" "<<l<<" "<<r<<" "<<s<<endl;
    if(r<L || R<l)  return ;
    if(l<=L && R<=r)
    {
        B[at] = s;
        return ;
    }
    ll mid;
    if(B[at])
    {
        mid = (L+R)/2;
        update(at*2,L,mid,L,mid,B[at]);
        update(at*2+1,mid+1,R,mid+1,R,B[at]+mid-L+1);
        B[at] = 0;
    }
    mid = (L+R)/2;
    update(at*2,L,mid,l,r,s);
    update(at*2+1,mid+1,R,l,r,s+max(0LL,mid-l+1));
}

///segquery O(logn) from l to r
ll Query(ll at,ll L,ll R,ll idx)
{
    if(idx==L && idx==R)   return B[at];
    if(B[at])   return B[at] + idx-L;
    ll mid = (L+R)/2;
    if(idx>=L && idx<=mid)
        return Query(at*2,L,mid,idx);
    if(idx>mid && idx<=R)
        return Query(at*2+1,mid+1,R,idx);
}

void solve(ll t)
{
    ll i,j,n,q,m,k;
    cin >> n ;
    for(i=1; i<=n; i++)
        cin >> d[i];

    cin >> q;
    for(i=0; i<q; i++)
    {
        ll type,l,r,s,u,v;
        cin >> type;
        if(type==1)
        {
            cin >> l >> r >> s;
            update(1,1,n,l,r,s);
        }
        else if(type==2)
        {
            cin >> l >> r >> s;
            update(1,1,n,l,r,s-(r-l));
        }
        else
        {
            cin >> u >> v;
            ll x,y;
            x = Query(1,1,n,u);
            y = Query(1,1,n,v);
    //cout<<endl<<i<<" "<<x<<" "<<y<<" "<<d[x]<<" "<<d[y]<<endl;
            x = d[x];
            y = d[y];
            ll ans = x*y;
            if(!ans)
            {
                cout <<ans<<endl;
                return;
            }
            for(j=2; j<=1000; j++)
            {
                ll ct = 0;
                while(x%j==0)
                {
                    x /= j;
                    ct++;
                }
                while(y%j==0)
                {
                    y /= j;
                    ct++;
                }
                if(ct)
                {
                    ans = ans*(j-1)/j;
                }
            }
            if(x>1)
                ans = ans*(x-1)/x;
            if(y>1)
                ans = ans*(y-1)/y;
            cout << ans <<endl;
        }
    }
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
