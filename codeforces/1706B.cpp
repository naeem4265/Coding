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
    ll c;
    vector<ll> v[n+5];
    for(i=0; i<n; i++)
    {
        cin >> c;
        v[c].pb(i);
    }
    for(i=1; i<=n; i++)
    {
        if(v[i].size()==0)
        {
            cout <<0<<" ";
            continue;
        }
        ll ans = 1;
        ll sz = v[i].size();
        ll l=v[i][0];
        for(j=1; j<sz; j++)
        {
            ll dis = v[i][j]-l; // cout <<i<<" "<<j<<" "<<l<<" "<<dis<<' '<<ans<<endl;
            if(dis&1)
            {
                ans++;
                l = v[i][j];
            }
        }
        cout << ans <<" ";
    }
    cout <<endl;

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
