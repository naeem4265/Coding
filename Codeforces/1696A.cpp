#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    ll x;
    cin >> n >> m;
    vector<pair<ll,ll> > a;
    for(i=0; i<n; i++)
    {
        cin >> x;
        ll cnt = 1;
        while(x%m==0)
        {
            cnt = cnt*m;
            x /= m;
        }
        if(a.size() && a[a.size()-1].first==x)
            a[a.size()-1].second += cnt;
        else
        {
            a.pb({x, cnt});
        }
    }
    cin >> k;
    vector<pair<ll,ll> > b;
    for(i=0; i<k; i++)
    {
        cin >> x;
        ll cnt = 1;
        while(x%m==0)
        {
            cnt = cnt*m;
            x /= m;
        }
        if(b.size() && b[b.size()-1].first==x)
            b[b.size()-1].second += cnt;
        else
        {
            b.pb({x, cnt});
        }
    }

    for(i=0; i<a.size(); i++)
    {    //cout <<a.size()<<" "<<b.size()<<" "<<a[i].first<<" "<<b[i].first<<" "<<a[i].second<<" "<<b[i].second<<endl;
        if(a.size()!=b.size() || a[i].first!=b[i].first || a[i].second!=b[i].second)
        {
            cout <<"No\n";
            return ;
        }
    }
    cout <<"Yes\n";

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
        Please_AC(t);
    return 0;
}
