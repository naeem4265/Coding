#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 2e5+5;
const ll Mod = 998244353;
using namespace std;
ll fact[limit];

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> s;
    n = s.size();
    s += '.';
    ll ans = 1, mn=0;
    for(ll l=0, i=1; i<=n; i++)
    {
        if(s[i-1] != s[i])
        {
            ll d = i-l;
            ans = (ans*d)%Mod;
            mn += d-1;
            l = i;
        }
    }
    cout << mn <<" "<<(ans*fact[mn])%Mod<<endl;


    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    fact[0] = 1;
    for(t=1; t<limit; t++)
    {
        fact[t] = (fact[t-1]*t)%Mod;
    }
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
