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

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll d[n+5];
    for(i=1; i<=n; i++)  cin >> d[i];
    ll ans = 1e18,ct=0,ct2=0;
    for(i=2; i<=n; i++)
    {
        ct2 = (max(d[i-1],d[i])+1)/2;
        ct = (d[i-1]+d[i])/3;
        if((d[i-1]+d[i])%3)  ct++;
        ct = max(ct, ct2);
        if(ans>ct)  ans = ct;
        if(i<n)
        {
            m = min(d[i-1],d[i+1]);
            ct = m;
            ct += (max(d[i-1],d[i+1])-m+1)/2;
            if(ans>ct)  ans = ct;
        }
    }
    sort(d+1,d+n+1);
    ct = (d[1]+1)/2+(d[2]+1)/2;
    if(ans>ct)  ans = ct;
    cout << ans <<endl;


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
