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

    cin >> m;
    ll d[m+5];
    for(i=1; i<=m; i++)  cin >> d[i];
    k = 2;
    ll ans = 0;
    while(k<=m)
    {
        for(j=1; j<=m; j+=k)
        {
            vector<ll> v,v2;
            for(ll l=j; l<(j+k); l++)
            {
                v.pb(d[l]);
                v2.pb(d[l]);
            }
            sort(v.begin(), v.end());
            if((v[k-1]-v[0]+1) != k)
            {
                cout <<-1<<endl;
                return ;
            }
            bool ok = 0;
            for(ll l=0; l<k; l++)
            {
                if(v[l]!=v2[l])
                {
                    ok = 1;
                }
                d[l+j] = v[l];
            }
            ans += ok;
        }
        k = k*2LL;
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
