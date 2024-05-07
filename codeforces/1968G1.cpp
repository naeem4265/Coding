#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
const ll base = 31;
using namespace std;

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

void cumforwardhashing(string s,ll base,ll mod,ll A[])
{
    ll i,n=s.size();
    A[0] = s[0]-'a'+1;
    for(i=1; i<n; i++)
    {
        A[i] = ((A[i-1]*base)+s[i]-'a'+1)%mod;
    }
}


ll Count(string s, ll len, ll sum, ll CumHash[]) {
    ll n = s.size();
    ll  ct = 1;
    for(int i=n-1; i>=len; ) {
        ll mul = bigmod( base, len, Mod );
        ll temp = ( CumHash[i] - (CumHash[i-len]*mul) % Mod + Mod ) % Mod;

        //cout <<i<<" "<<CumHash[i]<<" "<<CumHash[i-len]<<" "<<mul<<" "<<temp<<" "<<sum<<" "<<len<<" "<<ct<<endl;
        if( temp == sum ) {
            i -= len;
            ct++;
        }
        else
            i--;
    }
    return ct;
}


ll bs(string s, ll l, ll CumHash[]) {
    ll n = s.size();
    ll lo = 1, hi = n, mi, ans = 0;
    while( lo <= hi ) {
        mi = (lo + hi)/2;
        ll sum = CumHash[mi-1];
        ll cnt = Count(s, mi, sum, CumHash);
        if( cnt >= l ) {
            ans = mi;
            lo = mi+1;
        } else {
            hi = mi-1;
        }
    }
    return ans;
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q, l, r;
    string s;
    cin >> n >> l >> r;
    cin >> s;
    ll CumHash[n+5];
    cumforwardhashing(s, 31LL, Mod, CumHash);
    cout << bs(s, l, CumHash) <<endl;
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
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
