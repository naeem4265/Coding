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
    cin >> k;
    cin >> s;

    n = s.size();
    stack<pair<ll,ll> > stk;
    ll lev = -1, node = 0, ans=0;

    for( i=0; i<n; i++ ) {
        if( s[i] == '(' ) {
            if( lev == k )   ans += node;        //cout <<i<<" "<<lev<<" "<<node<<" "<<ans<<endl;
            lev++;
            node = 0;
        } else if( s[i] == ')' ) {
            if( lev == k )    ans += node;       //cout <<i<<" "<<lev<<" "<<node<<" "<<ans<<endl;
            lev--;
            node = 0;
        } else {
            node = node*10 + s[i]-'0';
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
   // cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
