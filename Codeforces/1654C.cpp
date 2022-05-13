#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

map<ll,ll> ct;

bool rec(ll sum)
{
    if(ct[sum])
    {
        ct[sum]--;
        return 1;
    }
    if(sum<2)    return 0;
    if(sum&1)
    {
        if(rec(sum/2) && rec(1+sum/2))
            return 1;
        else
            return 0;
    }
    else
    {
        if(rec(sum/2) && rec(sum/2))
            return 1;
        else
            return 0;
    }
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ct.clear();

    ll d[n+5];
    ll sum=0;
    for(i=0; i<n; i++)
    {
        cin >> m;
        sum += m;
        ct[m]++;
    }
    if(rec(sum))
        cout <<"YES\n";
    else
        cout <<"NO\n";
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
        solve(t);
    return 0;
}
