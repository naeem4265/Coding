#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000000
#define limit 1000001
using namespace std;
ll mx;
ll arr[50];

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    m = 1;
    vector<ll> ans;
    ans.pb(1);
    m = 1;
    for(i=0; ; i++)
    {
        m = m*3LL;
        if(m>Mod) break;

        ans.pb(m);
    }

    if(ans.size()>=n)
    {
        cout <<"YES\n";
        for(i=0; i<n; i++)
            cout <<ans[i]<<" ";
        cout <<endl;
    }
    else
    {
        cout <<"NO\n";
    }

    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t=1,tt=1;
    mx = 0;
    arr[0] = 1;
    for(t = 1; t<limit; t++)
    {
        mx++;
        arr[mx] = arr[mx-1]*3LL;
        t = arr[t];
    }
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
