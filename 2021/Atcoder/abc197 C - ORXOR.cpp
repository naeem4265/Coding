#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;
ll d[25];
ll ans,n;

void rec(ll pos, ll cur)
{
    if(pos>=n)
    {         //cout << cur<<" "<<ans <<endl;
        ans = min(ans,cur);
    }

    for(ll i=pos; i<n; i++)
    {
        ll x = 0;
        for(ll j=pos; j<=i; j++)
        {
            x = x|d[j];
        }
        rec(i+1,(cur^x));
    }
}

void solve(ll t)
{
    ll i,j,m=0,k;
    string s;
    cin >> n ;
    ans = 1e18;
    for(i=0; i<n; i++)  cin >> d[i];

    rec(m,m);

    cout << ans <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
