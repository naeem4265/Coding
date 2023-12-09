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

void solve(ll t)
{
    ll i,j,n,m,k;
    cin >> n ;
    cin >> m;
    if(m==0)
    {
        cout <<1<<endl;
        return ;
    }
    ll a[m+5];
    for(i=0; i<m; i++)
    {
        cin >> a[i];
    }
    if(m>=n)
    {
        cout <<0<<endl;
        return ;
    }
    sort(a,a+m);
    ll mn = 1e18;
    if(a[0]!=1) mn=a[0]-1;

    for(i=1; i<m; i++)
    {
        if(a[i]-1==a[i-1]) continue;
        mn = min(mn,a[i]-a[i-1]-1);
    }
    if(a[m-1]!=n)
        mn = min(mn,n-a[m-1]);
    ll ans=0,d;
    if(a[0]!=1)
    {
        d = a[0]-1LL;
        ans = d/mn;
        if(d%mn) ans++;
    }
    for(i=1; i<m; i++)
    {
        d = a[i]-a[i-1]-1;
        if(d)
        {
            ans += d/mn;
            if(d%mn) ans++;
        }
    }
    if(a[m-1]!=n)
    {
        d = n-a[m-1];
        ans += d/mn;      //cout <<i<<" "<<d<<" "<<mn<<" "<<ans<<endl;
        if(d%mn) ans++;
    }
    cout <<max(1LL,ans)<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

