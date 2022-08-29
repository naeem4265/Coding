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

    cin >> n;
    ll d[n+5];
    ll sum = 0;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        sum += d[i];
    }
    for(j=n-1; j>=0; j--)
    {
        if(d[j])  break;
    }
    ll ct = 0;
    for(i=0; i<n; i++)
    {
        ct += d[i];
        if(sum || (ct<=0 && i<j))
        {
            cout <<"No\n";
            return ;
        }
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
