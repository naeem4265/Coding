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
    string s;
    cin >> n;
    vector<pair<ll,ll> > v(n);
    ll fre[n+5];
    memset(fre, 0, sizeof(fre));
    for(i=0; i<n; i++)
    {
        ll a,b;
        cin >> a >> b ;
        if(a > b)
        {
            swap(a,b);
        }
        v[i].first = a;
        v[i].second = b;
        fre[a]++;
        fre[b]++;
    }
    sort(v.begin(), v.end());
    ll asign[n+5];
    memset(asign, 0, sizeof(asign));
    for(i=0; i<n; i++)
    {
        if(fre[v[i].first]>2 || fre[v[i].second]>2 || (asign[v[i].first]+asign[v[i].second])==3 || v[i].first==v[i].second )
        {
            cout <<"NO\n";
            return ;
        }
        if(asign[v[i].first]!=1 && asign[v[i].second]!=1)
        {
            asign[v[i].first] = 1;
            asign[v[i].second] = 1;
        }
        else
        {
            asign[v[i].first] = 2;
            asign[v[i].second] = 2;
        }
    }
    cout <<"YES\n";
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
