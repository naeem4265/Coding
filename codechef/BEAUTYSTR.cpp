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
ll fact[limit];


ll bigmod(ll b,ll p,ll M)
{
    ll ans=1;
    b=(b+M)%M;
    while(p)
    {
        if(p&1)
            ans = (ans*b)%M;
        b = (b*b)%M;
        p = p/2;
    }
    return ans;
}


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    cin >> s;
    sort(s.begin(), s.end());
    ll l=0;
    s += '*';
    ll ans = bigmod(2LL, n, Mod) - 1;     cout << ans <<endl;

    for( i=1,l=0; i<=n; i++ ) {
        if( s[i]!= s[i-1] ) {
            ll len = i-l;
            l = i;
            if( len == 1LL)  continue;
            ll x = (bigmod(2LL, len, Mod) - len+Mod)%Mod;
            ll y = (bigmod(2LL, n-len, Mod) * x )%Mod;   
            ans = ( ans - y + Mod)%Mod;     cout <<i<<' '<<len<<" "<<x<<" "<<y<<" "<<ans<<endl;
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
    fact[0] = 1;
    for(t=1; t<limit; t++ ) {   
        fact[t] = (fact[t-1]*t)%Mod;
    }
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
