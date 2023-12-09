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
    map<ll,bool> mp;
    mp.clear();

    for(i=0; i<n; i++)
    {
       cin >> d[i];
       mp[d[i]] = 1;
    }
    sort(d, d+n);
    if(d[0]==0 && d[n-1]==0)
    {
        cout <<"Yes\n";
        return ;
    }
    m = min(100LL, n);
    for(i=2; i<m; i++)
    {
        if(mp[(d[0]+d[1]+d[n-1])]==0 || mp[(d[0]+d[n-2]+d[n-1])]==0 || mp[(d[i-2]+d[i-1]+d[i])]==0)
        {
            cout <<"No\n";
            return ;
        }
    }

    for(i=n-1,j=0; i>1 && j<m ; i--,j++)
    {
        if(mp[(d[i-2]+d[i-1]+d[i])]==0)
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
