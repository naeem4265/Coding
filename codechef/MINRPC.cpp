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
    cin >> n;
    cin >> s;
    k = 1 + n/2;
    string ans = "";
    for( i=0,j=n-1; i<n; i++,j--) {
        if( s[i]=='R') {
            ans += 'P';
            k--;
        } else if( j >= k ) {
            ans += 'P';
        }    
        else if( s[i]=='S' ) {
            ans += 'R';
            k--;
        } else {
            ans += 'S';
            k--;
        }
    }
    cout << ans <<endl;

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
