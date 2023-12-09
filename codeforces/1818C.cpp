#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n >> q;
    ll d[n+5];
    for(i=1; i<=n; i++)   cin >> d[i];
    d[0] = 0;
    d[n+1] = Mod;

    ll csum[n+5];
    csum[0] = 0;

    for(i=1; i<=n; i++)
    {
        csum[i] = csum[i-1];
        if(d[i-1]>=d[i] && d[i]>=d[i+1])   csum[i]++;
    }
    while(q--)
    {
        ll l,r;
        cin >> l >> r;
        ll ans = r-l+1;     // cout <<r-l+1<<" "<<csum[r-1]<<" "<<csum[l+1]<<endl;
        ans -= (csum[r-1]-csum[l]);
        if((r-l+1)<3)  ans = r-l+1;
        cout <<ans<<endl;
    }

    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

