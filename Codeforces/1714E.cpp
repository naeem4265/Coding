#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000020
#define limit 1000008
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll d[n+5];
    ll cnt=0;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        if(d[i]%10==5 || d[i]%10==0)
        {
            d[i] += d[i]%10;
            cnt++;
            continue;
        }
        while(d[i]%10!=2LL && d[i]%10)
            d[i] += d[i]%10;
        ll x = (Mod-d[i])/20;
        d[i] += x*20;
    }
    sort(d, d+n);
    if(cnt)
    {
        if(d[0]==d[n-1])
            cout <<"YES\n";
        else
            cout <<"NO\n";
        return ;
    }
    for(i=0; i<n; i++)
    {
        while(d[i]<d[n-1])
            d[i] += d[i]%10;
        if(d[i]!=d[n-1])
        {
            cout <<"NO\n";
            return ;
        }
    }
    cout <<"YES\n";
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
