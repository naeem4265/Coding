/// cf-1514D
#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 300008
using namespace std;

ll cnt[limit];
ll frequ[limit];
ll mxfrequ;

void add(ll x)
{
    cnt[frequ[x]]--;
    frequ[x]++;
    if(mxfrequ < frequ[x]) mxfrequ = frequ[x];
    cnt[frequ[x]]++;
}
void sub(ll x)
{
    cnt[frequ[x]]--;
    if(mxfrequ==frequ[x] && cnt[frequ[x]]==0) mxfrequ--;
    frequ[x]--;
    cnt[frequ[x]]++;
}

/*
    splite all the query in sqrt(n) block according to left side
    and in each block all data are sorted according to right side
*/

///MO's algorithm O(n*sqrt(n))
ll block;
struct st
{
    ll l,r,idx;
    bool operator<(const st& a) const
    {
        if(l/block != a.l/block) return l/block < a.l/block;
        return r < a.r;
    }
};
///MO's

void MO(ll t)
{
    ll n,q,i;
    cin >> n >> q ;
    ll d[n+5]; d[0] = 0;
    vector<ll> out(q+5);

    for(i=1; i<=n; i++)
        cin >> d[i];

    ///MO's
    block = sqrt(n);
    st query[q+5];
    for(i=0; i<q; i++)
    {
        cin >> query[i].l >> query[i].r;
        query[i].idx = i;
    }
    sort(query,query+q);
    ///MO's

    ll left = 1,right = 0;
    for(i=0; i<q; i++)
    {          //cout <<i<<" "<<left<<" "<<right<<" "<<query[i].l<<" "<<query[i].r<<endl;
        while(right < query[i].r)
        {
            right++;
            add(d[right]);
        }
        while( right > query[i].r)
        {
            sub(d[right]);
            right--;
        }
        while(left < query[i].l)
        {
            sub(d[left]);
            left++;
        }
        while(left > query[i].l)
        {
            left--;
            add(d[left]);
        }
        out[query[i].idx] = 1 + max(0, mxfrequ - (query[i].r - query[i].l + 2 - mxfrequ));
        //cout <<left<<" "<<right<<" "<<mxfrequ<<" "<<out[query[i].idx]<<endl;
    }
    for(i=0; i<q; i++)
        cout << out[i] <<endl;
    return ;
}

int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        MO(t);
    return 0;
}
