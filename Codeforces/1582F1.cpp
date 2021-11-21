#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 512
using namespace std;

ll ok[limit];

void solve(ll tt)
{
    ll i,j,n,m,k,d;
    cin >> n;

    for(i=0; i<limit; i++)
        ok[i] = Mod;
    ok[0] = 0;
    for(i=0; i<n; i++)
    {
        cin >> d;
        for(j=0; j<limit; j++)
        {
            if( ok[j] < d && ok[j^d]>d)
                ok[j^d] = d;
        }
    }

    ll ans = 0;
    for(i=0; i<limit; i++)
    {
        if(ok[i]!=Mod)  ans++;
    }
    cout << ans <<endl;
    for(i=0; i<limit; i++)
    {
        if(ok[i]!=Mod)  cout <<i<<" ";
    }
    cout <<endl;
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
