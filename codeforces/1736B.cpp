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
    ll a[n+5],b[n+5];
    for(i=0; i<n; i++)
        cin >> a[i];
    b[0] = a[0];

    for(i=0; i<n; i++)
    {
        ll g = __gcd(a[i],b[i]);
        b[i] = b[i]*(a[i]/g);
        if(i)
        {
            g = __gcd(b[i],b[i-1]);
            if(g!=a[i-1])
            {
                cout <<"No\n";
                return ;
            }
        }
        b[i+1] = a[i];
    }
    cout <<"Yes\n";

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
