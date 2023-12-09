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
vector<ll> indx[limit];

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n >> k;
    for(i=1; i<=k; i++)  indx[i].clear();
    for(i=1; i<=k; i++)  indx[i].pb(0);
    for(i=1; i<=n; i++)
    {
        ll c;
        cin >> c;
        indx[c].pb(i);
    }
    for(i=1; i<=k; i++)  indx[i].pb(n+1);
    ll ans = Mod;
    for(i=1; i<=k; i++)
    {
        if(indx[i].size()==2)  continue;
        vector<ll> v;
        for(j=1; j<indx[i].size(); j++)
        {
            v.pb(indx[i][j]-indx[i][j-1]-1);
        }
        sort(v.begin(), v.end());
        ll temp = v[v.size()-1];
        temp /= 2;
        v.pop_back();
        v.pb(temp);
        sort(v.begin(), v.end());
        ans = min(ans, v[v.size()-1]);
    }
    cout << ans <<endl;



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
