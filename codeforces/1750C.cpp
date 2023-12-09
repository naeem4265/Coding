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
string a,b;

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    cin >> a >> b;
    ll ct = 0;
    vector<pair<ll,ll> > v;
    for(i=1; i<n; i++)
    {
        if(a[i-1]!=a[i])
        {
            v.pb({1, i});
            a[i-1] = a[i];
            ct++;
        }
        if(ct&1)
        {
            if(b[i]=='1')  b[i] = '0';
            else   b[i] = '1';
        }    //cout <<i<<" "<<ct<<" "<<b<<endl;
    }
    sort(b.begin(), b.end());
    if(b[0]!=b[n-1])
    {
        cout <<"No\n";
        return ;
    }
    if(a[n-1]=='1')
        v.pb({1,n});
    if(b[0]=='1')
    {
        v.pb({1,1});
        v.pb({2,n});
        v.pb({1,n});
    }
    cout <<"Yes\n";
    cout <<v.size()<<endl;
    for(i=0; i<v.size(); i++)
    {
        cout <<v[i].first <<" "<<v[i].second<<endl;
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
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

