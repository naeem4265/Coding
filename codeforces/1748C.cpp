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
    cin >> n;
    ll d[n+5],csum[n+5];
    csum[0] = 0;

    for(i=1; i<=n; i++)
    {
        cin >> d[i];
        csum[i] = d[i]+csum[i-1];
    }
    ll ans = 0;
    map<ll,ll> mp;
    ll mx = 0;
    mp.clear();

    for(i=n; i>0; i--)
    {
        mp[csum[i]]++;
        if(mx<mp[csum[i]])   mx = mp[csum[i]];
        if(d[i]==0)
        {
            ans += mx;
            mp.clear();
            mx = 0;
        }
    }
    for(i=1; i<=n; i++)
    {
        if(d[i]==0)  break;
        if(csum[i]==0)  ans++;
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
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

