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
///Factorial O(n)
void f()
{
    fact[0] = 1;
    fact[1] = 1;
    for(ll i=2; i<limit; i++)
        fact[i] = (fact[i-1]*i)%Mod;
   
}
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
    cin >> n >> m ;
    string s[n+5], temp;
    for( i=0; i<n; i++ )   cin >> s[i];
    if(n==1 ) {
        cout << 1 <<endl;
        return;
    }

    temp = s[0];

    ll cnt[m+2];
    memset( cnt, 0, sizeof( cnt ));

    for( i=n-2; i>=0; i-- ) {
        ll ct = 0;
        for( j=0; j<m; j++ ) {
            if( s[i][j] == '1' && s[i+1][j]=='1' )   ct++;
        }
        for( j=0; j<m; j++ ) {
            if( s[i][j]=='1' || ( s[i+1][j]=='1' && ct >= 2 ) )   s[i][j] = '1';
        }
    }
    ll ans = 1;

        ll ct = 0, ct2 =0 ;
        for( j=0; j<m; j++ ) {
            if( s[0][j] == '1' && s[1][j]=='1' )   ct++;
        }
        for( j=0; j<m; j++ ) {
            if( s[0][j] == '0' && s[1][j]=='1' )   ct2++;
        }

    bool vis[m+5];
    memset(vis, 0, sizeof(vis));

    ll x = 0;
    for( i=0, j=0; j<m; j++ ) {
        bool ok = 0;
        if( temp[j]=='1' ) {
            if( s[1][j]=='1' && ct2 >=1 )   ok = 1;
        } else {
            if( s[1][j] == '1' && ct >= 1 )   ok = 1;
        }
        if( ok ) {
            vis[i] = 1;
        }
    }
    ll one = 0, zero = 0;
    for( i=0; i<m; i++ ) {
        if( vis[i] ) {
            if( temp[j]=='1')  one++;
            else zero++;
        }
    }        cout << one <<" "<< zero<<endl;
    ans = ((fact[one+zero]*bigmod( fact[one], Mod-2 , Mod))%Mod*(bigmod(fact[zero], Mod-2, Mod)))%Mod;
    cout << ans <<endl;
    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    f();
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
