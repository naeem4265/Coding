#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    ll d[n+5];
    for(i=0; i<n; i++)
    {
        cin >> d[i];
    }

    vector<pair<ll,ll> > v;

    if(d[0]&1)
    {
        ll l=0,r=0;
        for(i=n-1; i>0; i--)
        {
            if(d[i]&1)
            {
                r = i;
                v.pb({l,r});
                break;
            }
        }
        for(i=1; i<n; i++)
        {
            if(d[i]%2==0)
            {
                v.pb({l, i});
            }
        }
        for(i=1; i<r; i++)
        {
            if(d[i]&1)
            {
                v.pb({i,r});
            }
        }
        cout <<v.size()<<endl;
        for(i=0; i<v.size(); i++)
        {
            cout <<v[i].first+1<<" "<<v[i].second+1<<endl;
        }
        return ;
    }

    ll l=0,r=0;
    for(i=n-1; i>0; i--)
    {
        if(d[i]%2==0)
        {
            r = i;
            v.pb({l,r});
            break;
        }
    }
    for(i=1; i<n; i++)
    {
        if(d[i]&1)
        {
            v.pb({l, i});
        }
    }
    for(i=1; i<r; i++)
    {
        if(d[i]%2==0)
        {
            v.pb({i,r});
        }
    }
    cout <<v.size()<<endl;
    for(i=0; i<v.size(); i++)
    {
        cout <<v[i].first+1<<" "<<v[i].second+1<<endl;
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
