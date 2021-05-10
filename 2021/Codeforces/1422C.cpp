#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 100008
using namespace std;

ll dp[limit];
void Set()
{
    dp[0] = 1;
    dp[1] = 1;
    ll x = 10;
    for(ll i=2; i<limit; i++)
    {
        dp[i] = (x*i+dp[i-1])%Mod;
        x = (x*10)%Mod;
    }
}
ll Pow(ll b,ll p)
{
    ll ans=1;
    while(p)
    {
        if(p&1)
            ans = (ans*b)%Mod;
        b = (b*b)%Mod;
        p = p/2;
    }
    return ans;
}

ll n;
string s;

ll pre(ll pos)
{
    ll l=pos,r=n-pos-1;
    ll next = (s[pos]-'0')*Pow(10,r);
    ll ans = l*(l+1)/2;         cout <<pos<<" "<<next<<" ";
    ans = (ans*next)%Mod;     cout <<ans<<" ";
    ans = (ans+next)%Mod;       cout <<ans<<" ";
    ans = (ans+(s[pos]-'0')*dp[r])%Mod;       cout <<ans<<endl;
    return ans;
}

void solve(ll t)
{
    ll i,j,m,k;
    cin >> s ;
    n = s.size();
    ll ans = 0;
    for(i=0; i<n; i++)
    {
        ans = (ans+pre(i))%Mod;       cout << ans <<endl;
    }
    cout << ans << endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    Set();
    ll t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
