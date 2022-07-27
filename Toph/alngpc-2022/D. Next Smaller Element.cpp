#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 600008
using namespace std;

ll ans[limit];

vector<ll> v;

void Please_AC(ll tt)
{
    ll i,j,n,q;

    cin >> n >> q;
    ll a[2*n+5];
    for(i=0; i<n+5; i++)
        ans[i] = -1;

    for(i=1; i<=n; i++)
    {
        cin >> a[i];
        a[n+i] = a[i]+1;
    }
    v.clear();
    ll sz = 0;
    for(i=1; i<=(2LL*n); i++)
    {
        while(sz && a[v[sz-1]]>a[i])
        {
            sz--;
            ans[v[sz]] = a[i];
            v.pop_back();
        }
        v.pb(i);
        sz++;
    }


    while(q--)
    {
        ll x;
        cin >> x;
        ll cycle = (x-1)/n;
        x = (x-1)%n;
        x++;
        if(ans[x]==-1)
            cout <<-1<<endl;
        else
            cout << ans[x]+cycle <<endl;
    }

    return ;
}

int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
