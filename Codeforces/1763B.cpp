#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n >> k;
    ll d[n+5];
    for(i=0; i<n; i++)   cin >> d[i];

    vector<pair<ll,ll> > v;
    for(i=0; i<n; i++)
    {
        cin >> m;
        v.pb({m, d[i]});
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    m = 0;
    while(k>=0)
    {
        m += k;
        while( !v.empty() && v[v.size()-1].second<= m)  v.pop_back();
        if( !v.empty())   k -= v[v.size()-1].first;
        else
        {
            cout <<"YES\n";
            return;
        }
    }
    cout << "NO\n";

    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

