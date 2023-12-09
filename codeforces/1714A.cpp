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
    ll i,j,n,m,k,h;
    cin >> n >> h >> m;
    ll d[n+5];
    vector<pair<ll,ll> > v(n);
    for(i=0; i<n; i++)
    {
        cin >> v[i].first;
        cin >> v[i].second;
    }
    sort(v.begin(), v.end());
    for(i=0; i<n; i++)
    {
        if(v[i].first==h && v[i].second==m)
        {
            cout <<"0 0"<<endl;
            return ;
        }
        if(v[i].first==h && v[i].second > m)
        {
            cout <<"0 "<<v[i].second-m<<endl;
            return ;
        }
        if(v[i].first>h)
        {
            if(v[i].second>=m)
            {
                cout <<v[i].first-h<<" "<<v[i].second-m<<endl;
                return ;
            }
            cout <<v[i].first-h-1<<" "<<60-m+v[i].second<<endl;
            return ;
        }
    }
            if(v[0].second>=m)
            {
                cout <<24-h+v[0].first<<" "<<v[0].second-m<<endl;
                return ;
            }
            cout <<24-h-1+v[0].first<<" "<<60-m+v[0].second<<endl;
            return ;
    return ;
}


int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
