#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
const ll base1 = 29;
const ll base2 = 31;
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
    A[0] = 0;
    for(i=1; i<=n; i++)
    {
        A[i] = ((A[i-1]*base)+s[i-1]-'a'+1)%mod;
    }
}


ll Count(string s, ll len, ll sum1, ll sum2, ll CumHash1[], ll CumHash2[]) {
    ll n = s.size();
    ll  ct = 0;
    for(int i=n; i>=len; ) {
        ll mul1 = bigmod( base1, len, Mod );
        ll mul2 = bigmod( base2, len, Mod );
        ll temp1 = ( CumHash1[i] - (CumHash1[i-len]*mul1) % Mod + Mod ) % Mod;
        ll temp2 = ( CumHash2[i] - (CumHash2[i-len]*mul2) % Mod + Mod ) % Mod;

        //cout <<i<<" "<<CumHash[i]<<" "<<CumHash[i-len]<<" "<<mul<<" "<<temp<<" "<<sum<<" "<<len<<" "<<ct<<endl;
        if( temp1 == sum1 && temp2 == sum2 ) {
            i -= len;
            ct++;
        }
        else
            i--;
    }
    return ct;
}


ll bs(string s, ll l, ll CumHash1[], ll CumHash2[]) {
    ll n = s.size();
    ll lo = 1, hi = n, mi, ans = 0;
    while( lo <= hi ) {
        mi = (lo + hi)/2;
        ll sum1 = CumHash1[mi];
        ll sum2 = CumHash2[mi];
        ll cnt = Count(s, mi, sum1, sum2, CumHash1, CumHash2);
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
    ll CumHash1[n+5], CumHash2[n+5];
    cumforwardhashing(s, base1, Mod, CumHash1);
    cumforwardhashing(s, base2, Mod, CumHash2);
    cout << bs(s, l, CumHash1, CumHash2) <<endl;
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
