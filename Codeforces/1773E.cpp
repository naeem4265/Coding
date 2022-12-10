#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e4+5;
const ll Mod = 1e9+7;
using namespace std;
vector<ll> v[limit],a;

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    ll ans = n;
    ll d[n+5];
    for(i=0; i<limit; i++)
        v[i].clear();
        a.clear();

    for(i=0; i<n; i++)
    {
        cin >> m;
        for(j=0; j<m; j++)
        {
            ll x;
            cin >> x;
            v[i].pb(x);
            a.pb(x);
        }
    }
    sort(a.begin(), a.end());
    ll split = 0;

    for(i=0; i<a.size(); )
    {
        for(j=0; j<n; j++)
        {
            for(k=0; k<v[j].size(); k++)
            {
                if(v[j][k]==a[i])   break;
            }
            if(k<v[j].size())
            {
                vector<ll> cpy;
                for(k=0; ; )
                {
                    ll x = v[j][k];
                    v[j].erase(v[j].begin());
                    if(x==a[i])    break;
                    cpy.pb(x);
                }
                if(!cpy.empty())
                {
                    split++;
                    v[n] = cpy;
                    n++;
                }
                i++;
                for(k=0; !v[j].empty() ; )
                {
                    ll x = v[j][k];
                    if(x!=a[i])    break;
                    v[j].erase(v[j].begin());
                    i++;
                }
                if(!v[j].empty())   split++;
                break;
            }
        }
    }
    cout <<split<<" "<<ans+split-1<<endl;
    return ;
}


int  main()
{
    Fast
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
