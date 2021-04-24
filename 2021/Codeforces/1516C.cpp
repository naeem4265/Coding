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
ll sum,n,cum[limit];
vector<pair<ll,ll> > d;
ll dp[105][limit];

bool rec(ll pos,ll ct,ll mn)
{    //cout<<pos<<" "<<ct<<endl;
    if(dp[pos][ct-mn]!=-1) return dp[pos][ct-mn];
    if(pos==n)
    {
        if(ct*2LL==(sum-mn)) return 1;
        return 0;
    }
    if(ct*2LL==(sum-mn)) return 1;
    if((2LL*ct)>(sum-mn)) return 0;
    if((2LL*(ct+cum[n-1]-mn-cum[pos]+d[pos].first))<(sum-mn)) return 0;

    if(rec(pos+1,ct,mn)) return dp[pos][ct-mn] = 1;
    return dp[pos][ct-mn] = rec(pos+1,ct+d[pos].first,mn);
}


void solve(ll t)
{
    ll i,j,m,k;
    string s;
    cin >> n ;
    d.resize(n);
    memset(dp,-1,sizeof(dp));
    for(i=0; i<n; i++)
    {
        cin >> m;
        sum += m;
        d[i].first = m;
        d[i].second = i+1;
    }
    sort(d.begin(),d.end());

    cum[0] = d[0].first;
    for(i=1; i<=n; i++)
    {
        cum[i] = cum[i-1]+d[i].first;
    }
    vector<ll> out;
    i=0;
    ll mn=0;
    while(rec(0,0,mn))
    {
        out.pb(d[i].second);
        mn += d[i].first;
        d[i].first = 0;
        i++;
    }
    cout << out.size()<<endl;
    for(i=0; i<out.size(); i++)
        cout <<out[i]<<" ";
    cout <<endl;
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
