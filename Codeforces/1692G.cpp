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

    cin >> n >> k;
    ll d[n+5];
    ll csum[n+5];
    csum[0] = 0;
    d[0] = 0;
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
        csum[i] = csum[i-1];
        if((d[i]*2LL)<=d[i-1])
            csum[i]++;
    }
    ll ans = 0;
    for(i=k+1; i<=n; i++)
    {
        if(csum[i]==csum[i-k])
            ans++;   //cout <<i<<" "<<csum[i]<<" "<<csum[i-k]<<" "<<ans<<endl;
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
