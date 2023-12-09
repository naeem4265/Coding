#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;
string s;
ll p[limit];
vector<pair<ll,ll> > v, vv;

void Please_AC(ll tt)
{
    ll i,j,n,k,q;
    cin >> n;
    cin >> s;
    ll p[n+1];
    ll m = 1 << n;
    for(i=0; i<m; i++)
        p[i] = i+1;

    vector<ll> ans;
    do{
        for(i=0; i<m; i+=2)
            v.pb({i,i+1});        for(i=0; i<n; i++)   cout <<p[i]<<" "; cout <<endl;
        i = 0;
        while(v.size()>1)
        {
            vv.clear();
            for(j=0; j<v.size(); j+=2)
            {
                if(s[i]=='1')
                {
                    ll x,y;
                    if(p[v[j].first]>p[v[j].second])
                        x = v[j].first;
                    else
                        x = v[j].second;
                    if(p[v[j+1].first]>p[v[j+1].second])
                        x = v[j+1].first;
                    else
                        x = v[j+1].second;
                    vv.pb({x,y});
                }
                else
                {
                    ll x,y;
                    if(p[v[j].first]<p[v[j].second])
                        x = v[j].first;
                    else
                        x = v[j].second;
                    if(p[v[j+1].first]<p[v[j+1].second])
                        x = v[j+1].first;
                    else
                        x = v[j+1].second;
                    vv.pb({x,y});
                }
            }
            v.clear();
            v = vv;
            i++;
        }
        if(s[i]=='1')
        {
            if(p[v[0].first] > p[v[0].second])
                ans.pb(v[0].first);
            else
                ans.pb(v[0].second);
        }
        else
        {
            if(p[v[0].first] > p[v[0].second])
                ans.pb(v[0].second);
            else
                ans.pb(v[0].first);
        }
    }
    while (next_permutation(p, p + n));

    sort(ans.begin(), ans.end());

    for(i=0; i<ans.size(); i++)
    {
        if(i && ans[i]==ans[i-1])  continue;
        cout << ans[i]+1 <<" ";
    }
    cout <<endl;
    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}


