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
    ll i,j,n=8,m,k,q;
    string s;
    cin >> s;
    for(i=0; i<n; i++ ) {
        if( i==1 || i==3 || i==5 ) {
            if( s[i]=='A' || s[i]=='E' || s[i]=='I'|| s[i]=='O' || s[i]=='U')   continue;
            cout << "NO\n";
            return;
        } else {
            if( s[i]=='A' || s[i]=='E' || s[i]=='I'|| s[i]=='O' || s[i]=='U') {
                cout <<"NO\n";
                return;
            }
        }
    }
    cout <<"YES\n";

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
