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
#define limit 100008
using namespace std;

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n;
    ll odd[limit],even[limit],d[n+5];
    memset(odd,0,sizeof(odd));
    memset(even,0,sizeof(even));

    for(i=0; i<n; i++)
    {
        cin >> d[i];
        if(i&1)
            odd[d[i]]++;
        else
            even[d[i]]++;
    }
    sort(d,d+n);
    for(i=0; i<n; i++)
    {
        if(i&1)
            odd[d[i]]--;
        else
            even[d[i]]--;
    }
    for(i=0; i<limit; i++)
    {
        if(odd[i] || even[i])
        {
            cout <<"No\n";
            return ;
        }
    }
    cout << "Yes\n";
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
        solve(t);
    return 0;
}
