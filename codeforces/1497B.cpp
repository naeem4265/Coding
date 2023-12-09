#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 100008
using namespace std;
ll ct[limit];

void solve(int t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n >> m;
    for(i=0; i<limit; i++) ct[i] = 0;
    for(i=0; i<n; i++)
    {
        ll a;
        cin >> a;
        a = a%m;
        ct[a]++;
    }
    ll ans = 0;
    if(ct[0]) ans = 1;
    for(i=1,j=m-1; i<=j; i++,j--)
    {
        if(ct[i]==0 && ct[j]==0) continue;
        ans += max(1LL,abs(ct[i]-ct[j]));
    }
    cout <<ans<<endl;
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
