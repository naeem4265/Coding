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

void solve(ll tc)
{
    ll i,j,n,m,k;
    cin >> n ;
    ll ans=0;
    for(i=5; ; i=i*5)
    {
        m = n/i;
        for(j=i*m; j<=n; j++)
            ans += m;
        m--;
        ans += (i*m*(m+1))/2;
        m = n/i;
        if(m==0)
            break;
    }

    cout <<"Case "<<tc<<": "<<ans<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
    cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

