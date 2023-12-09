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
    cin >> n >> k;
    ll d[n+5];
    for(i=0; i<n; i++)
        cin >> d[i];
    sort(d,d+n);

    d[n] = 1e18;
    m = 1;

    vector<pair<ll,ll> > v;
    v.pb({9,1});
    q = 9;

    if(n==1)
    {
        cout <<k+1<<endl;
        return ;
    }

    for(i=1,j=1; i<=n; i++,j++)
    {
        if(k<q) break;
        if(d[i]!=j)
        {
            m *= 10LL;
            i--;
        }
        else
        {
            m = 1;
        }
        q += (m*9LL);
        v.pb({9,m});

    }

    //for(j=v.size()-1; j>=0; j--) cout <<v[j].first;  cout <<endl;

    for(j=v.size()-1; j>=0; j--)
    {
        ll ct=0;
        for(i=0; i<j; i++)
        {
            ct += 9LL*(v[i].second);
        }        //cout <<j<<" jct "<<ct<<" "<<k<<endl;
        m = k-ct;
        if(m<0)
        {
            v[j].first=0;
            continue;
        }
        m /= v[j].second;
        m++;
        v[j].first = m;
        k -= m*v[j].second;

    }
    for(j=v.size()-1; j>=0; j--) cout <<v[j].first;
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
