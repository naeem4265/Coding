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


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n >> k;
    if( k==1 ) {
        for(i=1; i<=n; i++)   cout <<i<<" ";  cout <<endl;
        return;
    }
    if (k==n ) {
        for(i=n; i>0; i--)  cout <<i<<" ";  cout <<endl;
        return;
    }

    m = n/2;
    ll d = k-1, d2 = n-k;
    for(i=1; i<=n; i++ ) {
        if ( d%i == 0 ) {
            ll ct = 1 + (d/i);
            if( ct == m ) {
                for( j = k; j>0; j-= i)  cout <<j<< ' ';
                for( j = n; j>0; j-= i)  cout <<j<< ' ';
                cout <<endl;
                return;
            }
        }
        if( d2%i==0 ) {
            ll ct = 1 + (d2/i);
            if( ct == m ) {
                for( j = k; j<=n; j+= i)  cout <<j<< ' ';
                for( ll l=0, j = 1; l<m &&  j<=n; l++, j+= i)  cout <<j<< ' ';
                cout <<endl;
                return;
            }
        }
    }
    cout <<-1<<endl;


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
