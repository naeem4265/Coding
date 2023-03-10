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
    cin >> n >> m;
    vector<ll> v,v2;
    for(i=0; i<n; i++)
    {
        cin >> k;
        v.pb(k);
    }
    ll sum = 0;
    for(i=1; i<=m; i++)
    {
        cin >> k;
        if(i==m)  sum = k;
        else
            v.pb(k);
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for(i=1; i<n; i++)
    {
        sum += v[i-1];
    }

    cout << sum<<endl;

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

