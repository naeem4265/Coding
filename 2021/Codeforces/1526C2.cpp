#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

ll pr[limit];
ll Find(int u)
{
    if(pr[u]==u) return u;
    return pr[u] = Find(pr[u]);
}
void dsu(ll u,ll v)
{
    pr[Find(v)] = Find(u);
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n;
    ll d[n+5];
    for(i=0; i<n+5; i++) pr[i] = i;
    vector<pair<ll,ll> > v;
    ll ans =0;
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
        if(d[i]<0)
        {
            v.pb({-d[i],i});
            dsu(i-1, i);
        }
        else
            ans++;
    }

    //for(k=0; k<=n; k++) cout <<k<<" "<<pr[k] <<endl; cout <<"done\n";

    sort(v.begin(), v.end());
    for(i=0; i<v.size(); i++)
    {
        ll idx = v[i].second;
        ll sum = v[i].first;
        ll x = pr[idx];  //cout <<x<<" "<<sum<<" "<< ans <<endl;
        while(sum>0 && pr[x]!=0)
        {
            if(d[x]>0) sum-= d[x];
            x = pr[x-1];      //cout <<x<<" x sum "<<pr[x]<<' '<< sum <<endl;
        }  //cout << sum <<" "<< x <<endl;
        if(sum<=0)
        {
            ans++;
            sum = v[i].first;
            x = idx;
            while(sum && pr[x]!=0)
            {
                if(d[x]>0)
                {
                    ll temp= min(sum,d[x]);
                    d[x] -= temp;
                    sum -= temp;
                }
                if(sum)
                {
                    dsu(x-1,x);
                    x = Find(pr[x-1]);
                }
            }
        }
    }
    cout << ans << endl;
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
