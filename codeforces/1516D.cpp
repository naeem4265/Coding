#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 100008
using namespace std;

///Seive O(n*loglogn)
bool vis[limit];
vector<int>prime;
void seive()
{
    vis[0]=vis[1]=1;
    for(int i=4; i<limit; i+=2) vis[i] = 1;
    for(int i=3; i*i<limit; i+=2)
    {
        if(vis[i]) continue;
        for(int j=i*i; j<limit; j+=2*i)
        {
            vis[j] = 1;
        }
    }
    prime.pb(2);
    for(int j=3; j<limit; j+=2)
        if(vis[j]==0)
            prime.pb(j);
}

vector<ll> List[limit];
void Set()
{
    for(ll i=0; i < prime.size(); i++)
    {
        for(ll j = prime[i]; j<limit; j += prime[i])
            List[j].pb(prime[i]);
    }
}


const ll block = 350;
struct STC
{
    ll l,r,idx;
};
bool operator<(STC a,STC b)
{
    if((a.l/block) != (b.l/block))
        return a.l < b.l;
    return a.r < b.r;
}

ll ans[limit],ct;
ll cnt[limit];
void add(ll x)
{
    if(x==1) return;
    bool ok = 0;
    for(ll v : List[x])
    {
        if(cnt[v]) ok = 1;
        cnt[v]++;
    }       cout <<x<<" "<<ct<<" add ";
    if(ok) ct++;              cout <<ct<<endl;
}

void del(ll x)
{
    if(x==1) return;
    bool ok = 1;
    ll zero=0;
    for(ll v : List[x])
    {
        cnt[v]--;
        if(cnt[v]>1) ok = 0;
        else if(cnt[v]==0) zero++;
    }                  cout <<x<<" "<<ct<<" del ";
    if(ok && zero!=List[x].size()) ct--;           cout <<ct<<endl;
}

void solve(ll t)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n >> q;
    ll l,r;
    ll d[n+5];
    for(i=1; i<=n; i++)
        cin >> d[i];

    STC stc[q+2];
    for(i=0; i<q; i++)
    {
        cin >> l >> r;
        stc[i].l = l;
        stc[i].r = r;
        stc[i].idx = i;
    }
    sort(stc,stc+q);
    l = 1; r = 0; ct = 1;
    for(i=0; i<q; i++)
    {           cout <<i<<" "<<l<<" "<<r<<" "<<stc[i].l<<" "<<stc[i].r<<endl;
        while(r < stc[i].r)
        {
            r++;
            add(d[r]);
        }
        while(r > stc[i].r)
        {
            del(d[r]);
            r--;
        }
        while(l < stc[i].l)
        {
            del(d[l]);
            l++;
        }
        while(l > stc[i].l)
        {
            l--;
            add(d[l]);
        }
        ans[stc[i].idx] = ct;         cout << ct <<endl;
    }
    for(i=0; i<q; i++)
        cout << ans[i] <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    seive();
    Set();
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

/*
6 3
2 3 10 7 5 14
1 6
2 4
3 5
*/
