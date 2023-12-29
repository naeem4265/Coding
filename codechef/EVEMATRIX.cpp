#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e3+5;
const ll Mod = 1e9+7;
using namespace std;

ll a[limit][limit];

ll valid( ll n ) {
    for(ll i=2; i<=n; i++ ) {
        ll sum = 0;
        for(ll j=1; j<=i; j++ ) {
            sum += a[1][j];
            sum += a[i][j];
        }
        for(ll j=2; j<i; j++ ) {
            sum += a[j][1];
            sum += a[j][i];
        }
        if( sum%2==0 ) {   return i;}
    }
    return 0;
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    if( n==2LL ) {
        cout << -1 <<endl;
        return;
    }


    a[1][1] = 1;
    if( n&1 ) {
        for( i=1, k = 1; i<=n; i++ ) {
            for( j=1; j<i; j++ ) {
                k += 2;
                if( k > (n*n) )   k = 2;
                a[i][j] = k;
                k += 2;
                if( k > (n*n) )  k = 2;
                a[j][i] = k;
            }
        }
        for( i=2; i<=n; i++ ) {
            k += 2;
            a[i][i] = k;
        }
    } else {
        for( i=1, k = -1; i<=n; i++ ) {
            for( j=1; j<=i; j++ ) {
                k += 2;
                if( k > (n*n) )   k = 2;
                a[j][i] = k;
            }
        }
        for( i=1; i<=n; i++ ) {
            for( j=1; j<i; j++ ) {
                k += 2;
                if( k > (n*n) )   k = 2;
                a[i][j] = k;
            }
        }
    }
   
    
    if( valid(n) ) {
        cout << -1 <<endl;
        return;
    }    

    for(i=1; i<=n; i++ ) {
        for( j=1; j<=n; j++ )   cout << a[i][j] <<" ";   cout <<endl;
    }
    //cout <<"check "<<n<<" "<<valid(n) <<endl;
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
