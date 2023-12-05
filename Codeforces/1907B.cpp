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
    cin >> s;

    n = s.size();
    ll b=0,B=0;
    vector<char> ans;
    for(i=n-1; i>=0; i--) {
        if( s[i]=='B' )    B++;
        else if( s[i]=='b' )    b++;
        else if( s[i]>='a' ) {
            if(b)   b--;
            else     ans.pb(s[i]);
        } else {
            if(B)   B--;
            else    ans.pb( s[i] );
        }
    }
    reverse(ans.begin(), ans.end());
    for( char c: ans )    cout << c;   cout <<endl;

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
