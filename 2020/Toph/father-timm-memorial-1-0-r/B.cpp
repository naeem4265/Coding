#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000000
#define limit 1000008
using namespace std;

void solve(int t)
{
    ll i,j,n,m,k;
    cin >> n ;
    ll D[n+5];
    for(i=1; i<=n; i++) cin >> D[i];
    cin >> m;
    ll M[m+5];
    for(i=1; i<=m; i++)
    {
        cin >> M[i];
    }
    ll ans = 0;
    for(i=1; i<=m; i++)
    {
        ll ct=1;
        for(j=1; j<=n; j++)
        {
            if(M[i]==j) continue;
            ct = ct*D[j];
            if(ct>Mod) ct=0;
        }
        ll x = ct;
        ll y = D[M[i]]*D[M[i]];
        if(y)
            ans += x/y;
    }
    cout <<"Case #"<<t<<": "<<ans<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

