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

void solve(int t)
{
    int i,j,n,m,k;
    cin >> n ;
    ll D[n+5];
    D[n] = -1;
    for(i=0; i<n; i++) cin >> D[i];
    vector<ll> a,b;
    ll ans=1,ans2=1;
    a.pb(-2);
    b.pb(-2);
    a.pb(D[0]);
    for(i=1; i<n; i++)
    {
        ll x = D[i],y = D[i+1];
        ll p = a.size()-1,q = b.size()-1;

        if(a[p]==x)
        {
            a.pb(x);          // cout <<i<<" if "<<ans<<endl;
        }
        else if(b[q]==x)
        {
            b.pb(x);        //cout <<i<<" else "<<ans<<endl;
        }
        else if(a[p]==x)
        {
            a.pb(x);
        }
        else
        {
            if(b[q]!=x) ans++;
            b.pb(x);
        }         //cout <<i<<" "<<ans<<endl;
    }
    a.clear();
    b.clear();
    a.pb(-2);
    b.pb(-2);
    b.pb(D[0]);
    for(i=1; i<n; i++)
    {
        ll x = D[i],y = D[i+1];
        ll p = a.size()-1,q = b.size()-1;

        if(b[q]==x)
        {
            b.pb(x);       // cout <<i<<" else "<<ans<<endl;
        }
        else if(a[p]==x)
        {
            a.pb(x);           //cout <<i<<" if "<<ans<<endl;
        }
        else if(b[q]==x)
        {
            b.pb(x);
        }
        else
        {
            if(a[p]!=x) ans2++;
            a.pb(x);
        }   //cout <<i<<" "<<ans2<<endl;
    }
    cout <<min(ans,ans2)<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
