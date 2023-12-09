#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 200008
using namespace std;
ll frequ[limit*10];
ll ans;
ll out[limit];

const ll block=450;
struct st
{
    ll l,r,idx;
    bool operator<(const st& a) const
    {
        if(l/block != a.l/block) return l/block < a.l/block;
        return r < a.r;
    }
};
st query[limit];

void add(ll x)
{
    ans -= (frequ[x]*frequ[x]*x);
    frequ[x]++;
    ans += (frequ[x]*frequ[x]*x);
}
void sub(ll x)
{
    ans -= (frequ[x]*frequ[x]*x);
    frequ[x]--;
    ans += (frequ[x]*frequ[x]*x);
}

void solve(ll t)
{
    ll i,j,n,m,k,q;
    string s;
    scanf("%I64d %I64d",&n,&q);
    ll d[n+5];
    for(i=1; i<=n; i++)
        scanf("%I64d",&d[i]);

    for(i=0; i<q; i++)
    {
        scanf("%I64d %I64d",&query[i].l, &query[i].r);
        query[i].idx = i;
    }
    sort(query,query+q);

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
        out[query[i].idx] = ans;
        //cout <<left<<" "<<right<<" "<<mxfrequ<<" "<<out[query[i].idx]<<endl;
    }
    for(i=0; i<q; i++)
        printf("%I64d\n",out[i]);
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
