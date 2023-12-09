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


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll d[n+5],dd[n+5];
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
        dd[i] = d[i];
    }
    ll ans = 0;
    if(n&1)
    {
        for(i=2; i<n; i+=2)
        {
            ll ct = max(0LL, max(d[i-1]-d[i], d[i+1]-d[i])+1);
            ans += ct;
        }
        cout << ans <<endl;
        return ;
    }
    else
    {
        ll csuml[n+5],csumr[n+5];
        csuml[0] = csuml[1] = 0;
        csumr[n] = csumr[n+1] = 0;
        for(i=2; i<n; i++)
        {
            ll ct = max(0LL, max(d[i-1]-d[i], d[i+1]-d[i])+1);
            csuml[i] = csuml[i-2] + ct;
        }
        for(i=n-1; i>1; i--)
        {
            ll ct = max(0LL, max(d[i-1]-d[i], d[i+1]-d[i])+1);
            csumr[i] = csumr[i+2] + ct;
        }
        ans = min(csumr[3],csuml[n-2]);
        for(i=4; i<n-1; i+=2)
        {
            ans = min(ans, csuml[i-2]+csumr[i+1]);  //cout <<i<<' '<<ans<<" "<<csuml[i-2]<<" "<<csumr[i+1]<<endl;
        }
    }
    cout << ans <<endl;


    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
