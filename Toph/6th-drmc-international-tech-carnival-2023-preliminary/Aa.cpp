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
///seive
bool vis[limit];
vector<ll>prime;
void seive()
{
    vis[0]=vis[1]=1;
    for(ll i=4; i<limit; i+=2) vis[i] = 1;
    for(ll i=3; i*i<limit; i+=2)
    {
        if(vis[i]) continue;
        for(ll j=i*i; j<limit; j+=2*i)
        {
            vis[j] = 1;
        }
    }
    prime.pb(2);
    for(ll j=3; j<limit; j+=2)
        if(vis[j]==0)
            prime.pb(j);
}
ll a,b,k;
ll rec(ll pos, ll mul)
{
    if(mul>b)  return 0;
    ll ans = 0;
    if(mul>=a)  ans = 1;
    if(prime[pos]>=k)  return 0;
    ans += rec(pos, mul*prime[pos]);
    ans += rec(pos+1, mul);
}

int  main()
{
    Fast
//    Freed
//    Fout
    seive();
    cin >> a >> b >> k;
    if(k>=limit)
    {
        if(b>=k)   cout << 1 <<endl;
        else
            cout << 0 <<endl;
        return 0;
    }
    if(vis[k])
    {
        cout << 0 <<endl;
        return 0;
    }

    ll ans = b/k-(a-1)/k;
    ans -= rec(0, 1);
    cout << ans <<endl;
    return 0;
}
