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
    cout << s[0];
    for(i=1; i<n-1; i++ ) {
        if( s[i] != 'a' && s[i] != 'e' ) {
            if( s[i+1] !='a' && s[i+1] != 'e' ) {
                cout << s[i++] << '.' << s[i];
            } else {
                cout <<'.'<< s[i] ; 
            } 
        } else  cout << s[i];
    }
    cout << s[n-1] <<endl;

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
