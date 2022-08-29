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
    string t,s;
    cin >> t;
    map<string, ll> mp;

    m = t.size();
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> s;
        mp[s] = i+1;
    }
    vector<pair<ll,ll> > v;

    for(i=0; i<m; i++)
    {
        bool ok = 1;
        for(j=9; j>=0; j--)
        {
            s = "";
            ll sz = 10;
            for(k=i+j; k>=i; k--,sz--)
            {
                s = t[k]+s;
            }
            if(mp[s])
            {
                v.pb({mp[s],i+1});
                i = i+j;
                ok = 0;
                j = -1;
                break;
            }
            for(ll ct=1; sz && k>=0; k--,sz--,ct++)
            {
                s = t[k]+s;
                if(mp[s])
                {
                    v.pb({mp[s],i+1-ct});
                    i = i+j;
                    ok =0;
                    j = -1;
                    break;
                }
            }
        }   //cout <<i<<" "<<ok<<" "<<v.size()<<" "<<v[v.size()-1].first<<endl;
        if(ok)
        {
            cout <<-1<<endl;
            return ;
        }
    }
    cout <<v.size()<<endl;
    for(i=0; i<v.size(); i++)
    {
        cout <<v[i].first<<" "<<v[i].second<<endl;
    }
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
