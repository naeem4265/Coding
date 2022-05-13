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

struct st
{
    ll x,w,i;
};
bool operator<(st a, st b)
{
    return a.x<b.x;
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n >> m;
    vector<pair<ll, ll> > v;
    vector<st> v2;
    st z;
    ll sum = 0;
    ll x,w;
    for(i=0; i<m; i++)
    {
        cin >> x >> w;
        sum += w;
        z.x = x;
        z.w = w;
        z.i = i+1;
        v2.pb(z);
        v.pb({w,x});
    }

    sort(v.begin(), v.end());
    k = 1;
    map<ll,ll> mymap;
    bool vis[m+5];
    memset(vis, 0, sizeof(vis));

    for(i=v.size()-1; i>=(2LL*n); i--)
    {
        x = v[i].second;
        sum -= v[i].first;
        if(mymap[x]==0)
            mymap[x] = k++;
        vis[mymap[x]] = 1;
    }

    sort(v2.begin(), v2.end());
    st l,r;
    cout << sum <<endl;
    for(i=0,j=m-1,k=0; k<n; i++,j--,k++)
    {
        l = v2[i];
        while(vis[mymap[l.x]] && i<j)
        {
            i++;
            l = v2[i];
        }
        r = v2[j];
        while(vis[mymap[r.x]] && j>i)
        {
            j--;
            r = v2[j];
        }  //cout <<l.i<<" "<<l.x<<" "<<l.w<<" "<<r.i<<" "<<r.x<<" "<<r.w<<endl;
        cout <<l.i<<" "<<r.i<<endl;
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
        solve(t);
        if(t<tt)
            cout <<endl;
    }
    return 0;
}
