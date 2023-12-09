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

void solve(ll t)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    priority_queue<pair<ll,ll> > pq;

    for(i=0; i<n; i++)
    {
        cin >> m;
        pq.push({m,i+1});
    }

    pq.push({0,0});
    pq.push({0,0});
    ll ans=0;
    vector<pair<ll,ll> > out;
    while(!pq.empty())
    {
        pair<ll,ll> x,y;
        x = pq.top();
        pq.pop();
        y = pq.top();
        pq.pop();
        if(y.first==0) break;
        ans++;
        out.pb({x.second,y.second});
        pq.push({x.first-1,x.second});
        pq.push({y.first-1,y.second});

    }
    cout << out.size() <<endl;
    for(i=0; i<out.size(); i++)
    {
        cout << out[i].first <<" "<< out[i].second <<endl;
    }

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
