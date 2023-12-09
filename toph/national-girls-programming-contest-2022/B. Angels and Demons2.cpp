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

vector<pair<ll,ll> > v;

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q,s,e,d;
    cin >> n >> q;
    v.clear();

    for(i=0; i<q; i++)
    {
        cin >> tt;
        cin >> s >> e >> d ;
        if(tt==1)
        {
            v.pb({s, d});
            v.pb({e+1, -d});
        }
        else
        {
            v.pb({s, -d});
            v.pb({e+1, d});
        }
    }
    sort(v.begin(), v.end());
    ll mn = 1e18,sum=0,cur=v[0].second;
    m = q*2LL;

    for(i=1; i<m; i++)
    {
        sum += cur*(v[i].first-v[i-1].first);
        cur += v[i].second;
        mn = min(mn, sum);
    }

    cout << max(1LL, -mn+1) <<endl;

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

