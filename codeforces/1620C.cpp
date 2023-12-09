#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    ll x;
    cin >> n >> k >> x;
    cin >> s;
    ll mx = 1;
    s = 'c'+s;
    vector<ll> v(n+5);
    for(i=n; i>0; i--)
    {
        if(s[i]=='a')
        {
            v[i] = v[i+1];
            continue;
        }
        for(j=i-1; j>=0; j--)
        {
            if(s[j]!='*')
            {
                v.pb((j-i)*k);
                i = j;
                break;
            }
        }
    }
    m = v.size();
    for(i=m-2; i>=0; i--)
    {
        v[i] += v[i+1];
    }
    for(i=0; i<n; i++)
    {
        if(s[i]=='a')
        {
            cout <<s[i];
            continue;
        }
        if()
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
