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

void solve(ll t)
{
    ll i,j,n,m,x;
    string s;
    cin >> n >> x;

    ll d[n+5],dd[n+5],ok=0;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        dd[i] = d[i];
    }
    sort(dd,dd+n);
    for(i=1; i<n; i++)
    {
        if(d[i-1]>d[i]) break;
    }
    if(x==1 || i==n || n>=2LL*x)
        ok = 1;
    {
        cout <<"YES\n";
        return ;
    }
    s
    for(i=0; i<n; i++)
    {
        if(d[i]!=dd[i])
            mn = min(mn, abs(e[i].i-i));      //cout <<i<<" "<<mn<<" "<<e[i].i<<endl;
    }        //cout <<m<<" "<<mn<<endl;
    m = max(m,mn);

    if( m>=x )
    {
        cout <<"YES\n";
        return ;
    }
    cout <<"NO\n";

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
