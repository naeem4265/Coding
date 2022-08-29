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
    string s;
    cin >> n;
    ll d[n+5];
    ll ans = 0,pre = 0;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
    }

    for(i=1; i<n; i++)
    {
        ll x = d[i]-pre;
        if(x>d[i-1])
        {
            ans += x-d[i-1];
            pre += x-d[i-1];
            d[i] = d[i-1];
        }
        else
        {
            ans += d[i-1]-x;
            d[i] = x;
        }  //cout <<i<<" "<<d[i]<<" "<<ans<<endl;
    }
    ans += abs(d[n-1]);
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
        Please_AC(t);
    return 0;
}
