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

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n >> k;
    ll d[n+5];
    for(i=0; i<n; i++)
    {
        cin >> d[i];
    }
    sort(d,d+n);
    d[n] = 0;
    ll ans = 1e18;
    for(i=1; i<=n; i++)
    {
        m = n-i+1;
        ll temp ;
        if(k<0)
        {
            temp = (-k)/m;
            if((-k)%m) temp++;
            temp = -temp;
            temp = d[0]-temp;
        }
        else
        {
            temp = max(0LL,d[0]-k/m);
        }
        ans = min(ans, n-i+temp);
        k -= d[i];        //cout <<ans<<" "<<i<<" "<<temp<<endl;
    }
    cout << ans <<endl;
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
