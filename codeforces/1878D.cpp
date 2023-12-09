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
    string s;
    cin >> s;
    ll l[k+5], r[k+5];
    for(i=0; i<k; i++)   cin >> l[i];
    for(i=0; i<k; i++)   cin >> r[i];

    cin >> q;
    ll x[q+5];
    for(i=0; i<q; i++)   cin >> x[i];
    sort(x, x+q);
    vector<pair<ll,ll> > v;
    for(i=0,j=0; i<q; i++)
    {
        while(x[i]>r[j])   j++;
        ll mn = min(x[i]-1, l[j]+r[j]-x[i]-1);
        ll mx = max(x[i]-1, l[j]+r[j]-x[i]-1);
        v.pb({mn, mx});   //cout <<i<<" "<<j<<" "<<x[i]<<" "<<l[j]+r[j]<<" "<<mn<<" "<<mx<<endl;
    }
    sort(v.begin(), v.end());
    v.pb({n, -1});    //for(i=0; i<v.size(); i++)   cout <<v[i].first<<" "<<v[i].second<<endl;

    ll ok = 0, h=-1;
    for(i=0,m=0; i<n; i++)
    {
        while(i>=v[m].first && i<=v[m].second)
        {
            h = v[m].second;
            ok = ok^1;
            m++;
        }
        if(i>h)   ok = 0;    // cout <<i<<' '<<ok<<" "<<h<<endl;
        if(ok)
        {
            swap(s[i], s[h]);
        }
        h--;
        if(i>=h)   ok = 0;
    }
    cout << s <<endl;

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
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
