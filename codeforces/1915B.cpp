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
    ll cnt[3] = {0};
    for( i=0; i<3; i++ ) {
        for(j=0; j<3; j++ ) {
            char c;
            cin >> c;
            if( c>='A' && c<='C')  cnt[c-'A']++;
        }
    }
    if( cnt[0]==2 )   cout << 'A' <<endl;
    else if( cnt[1]==2 )    cout << 'B' <<endl;
    else    cout << 'C' <<endl;

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