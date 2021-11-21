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
    ll i,j,n,m=0,k;
    string s;
    cin >> n;
    ll d;
    vector<pair <ll,ll> > v;
    for(i=0; i<n; i++)
    {
        cin >> d;
        v.pb({d,i});
    }

    if(n%2==0)
    {
        for(i=1; i<n; i+=2)
        {
            cout <<-v[i].first<<" "<<v[i-1].first<<" ";
        }
        cout <<endl;
        return ;
    }
    ll ans[n+5];
    sort(v.begin(),v.end());

    if(v[0].first==v[2].first)
    {
        ans[v[0].second] = 1;
        ans[v[1].second] = 1;
        ans[v[2].second] = -2;
    }
    else if(v[0].first != -v[1].first)
    {
        ans[v[0].second] = v[2].first;
        ans[v[1].second] = v[2].first;
        ans[v[2].second] = -(v[0].first+v[1].first);
    }
    else
    {
        ans[v[1].second] = v[0].first;
        ans[v[2].second] = v[0].first;
        ans[v[0].second] = -(v[1].first+v[2].first);
    }

    for(i=4; i<n; i+=2)
    {
        if(v[i-1].first==v[i].first)
        {
            ans[v[i-1].second] = -1;
            ans[v[i].second] = 1;
        }
        else
        {
            ans[v[i-1].second] = -v[i].first;
            ans[v[i].second] = v[i-1].first;
        }
    }
    for(i=0; i<n; i++)
    {
        cout <<ans[i]<<" ";
    }
    cout <<endl;

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
