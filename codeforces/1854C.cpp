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
    string s;
    cin >> n;
    ll d[n+5];
    ll mx = 0, idx;
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
        if(mx < d[i])
        {
            mx = d[i];
            idx = i;
        }
    }
    if(n==1)
    {
        cout <<0<<endl;
        return;
    }
    vector<pair<ll,ll> > v;
    if(mx)
    {
        ll temp = d[idx];
        while(temp<40)
        {
            v.pb({idx, idx});
            temp += temp;
        }
        v.pb({1, idx});
        d[1] += temp;
        for(i=2; i<=n; i++)
        {
            while(d[i]<d[i-1])
            {
                d[i] += d[i-1];
                v.pb({i, i-1});
            }
        }
        cout <<v.size() <<endl;
        for(auto x: v)  cout << x.first<<" "<< x.second<<endl;
        return;
    }
    ll mn = 0;
    for(i=n; i>0; i--)
    {
        if(mn>d[i])
        {
            mn = d[i];
            idx = i;
        }
    }
    if(mn)
    {
        ll temp = d[idx];
        while(temp>-20)
        {
            v.pb({idx, idx});
            temp += temp;
        }
        v.pb({idx, n});
        d[n] += temp;
        for(i=n-1; i>0; i--)
        {
            while(d[i]>d[i+1])
            {
                v.pb({i, i+1});
                d[i] += d[i+1];
            }
        }
        cout << v.size() <<endl;
        for(auto x: v)  cout << x.first<<" "<< x.second<<endl;
        return;
    }
    cout <<0<<endl;


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
