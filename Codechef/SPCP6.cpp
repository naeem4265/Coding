#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e5+5;
const ll Mod = 1e9+7;
using namespace std;
ll dp[2][limit];

ll rec(bool chef, ll L) {
    if (dp[chef][L] != -1 )   return dp[chef][L];

    if( L==1 ) {
        if( chef )      return 1;
        return 0;
    } else if( L==2 ) {
        return 1;
    } else if( L==3 ) {
        if( chef )  return 3;
        return 1;
    } else if( L==4 ) {
        return 4;
    } else {  //cout <<rec(!chef, L-1) <<" "<<rec(chef, L-2) <<" "<<rec(chef, L-3) <<" "<<rec(chef, L-4) <<endl;
        dp[chef][L] = ( rec( !chef, L-1 ) + rec(chef, L-2) + rec(chef, L-3) + rec(chef, L-4) ) % Mod;
        return dp[chef][L];
    }
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    ll L;
    cin >> L;

    cout << rec(1, L) <<endl;


    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    memset(dp, -1, sizeof(dp));

    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
