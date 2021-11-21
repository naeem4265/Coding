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
#define limit 100008
using namespace std;
ll d[limit],tree[4*limit];

void segment(ll L,ll R,ll pos)
{
    if(L==R)
    {
        tree[pos] = d[L];     //cout <<pos<<" seg "<<L<<" "<<R<<" "<<tree[pos]<<endl;
        return;
    }
    ll m = (L+R)/2;
    segment(L,m,pos*2);
    segment(m+1,R,pos*2+1);
    tree[pos] = max(tree[pos*2], tree[pos*2+1]);   //cout <<pos<<" seg "<<L<<" "<<R<<" "<<tree[pos]<<endl;
}
ll Search(ll l,ll r,ll L,ll R,ll pos)
{
    if(l>R || r<L) return -1;
    if(l<=L && r>=R) return tree[pos];

    ll m = (L+R)/2;
    return max(Search(l,r,L,m,pos*2),Search(l,r,m+1,R,pos*2+1));
}

// Binary index tree
ll sum[limit];
void update(ll pos, ll val)
{
    while(pos < limit)
    {
        sum[pos] += val;
        pos += (pos & -pos);
    }
}

ll read(ll pos)
{
    ll s = 0;
    while(pos>0)
    {
        s += sum[pos];
        pos -= (pos & -pos);
    }
    return s;
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n;

    memset(sum,0,sizeof(sum));

    for(i=0; i<n; i++)
        cin >> d[i];
    segment(0,n-1,1);
    cin >> m;
    ll mx[m+5];

    for(i=0; i<m; i++)
    {
        ll x,l,r;
        cin >> x >> l >> r;
        mx[x] = Search(l-1,r-1,0,n-1,1);   //cout << x <<" "<<mx[x] << endl;
    }
    ll e[m+5];
    for(i=0; i<m; i++)
    {
        cin >> e[i];
    }

    ll out[m+5];
    for(i=m-1; i>=0; i--)
    {
        update(e[i],mx[e[i]]);
        out[i] = read(e[i]-1);
    }
    for(i=0; i<m; i++)
    {
        cout <<out[i]<<" ";
    }
    cout << endl;
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
