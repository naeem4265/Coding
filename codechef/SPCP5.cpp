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
ll BS(ll key) {
    ll l=0,h=prime.size()-1,m, ans = 0;
    while(l<=h ) {
        m = (l+h)/2;
        if( prime[m] <= key) {
            ans = prime[m];
            l = m+1;
        } else {
            h = m-1;
        }
    }
    return ans;
}

ll rec(ll n, ll p, ll ok) {
    if( n < 0LL)   return 1e16;
    if( n==0 )  return 0;

    ll ans = 1 + rec(n-p, p*2LL, ok);
    if( ok == 0)   return ans;

    ll mn = BS(n);
    ll temp = 1 + rec(n-mn, p, 0);
    return min(ans, temp) ;
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;

    m = rec( n , 1, 1);
    if ( m >= Mod){
        m = -1;
    }
    cout << m <<endl;


    return ;
}


int  main()
{
//    Fast
//    Freed
//    Fout
    seive();
    ll t,tt;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
