#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 2e5+5;
const ll Mod = 1e9+7;
using namespace std;

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    bool ok = 1;
    ll d[n+5],sum=1;
    for(i=0; i<n; i++)   cin >> d[i];
    sort(d, d+n);

    if(d[0]!=1)  ok = 0;
    for(i=1; i<n; i++)
    {
        if( d[i]>sum )  ok = 0;
        sum += d[i];
    }
    if(ok)
        cout <<"Yes\n";
    else
        cout <<"No\n";
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

