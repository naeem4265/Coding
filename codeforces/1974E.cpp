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
    ll i,j,n,m,k,x;
    string s;
    cin >> m >> x;
    ll c[m+5], h[m+5];
    ll sum = 0;
    for( i=1; i<=m; i++) {
        cin >> c[i] >> h[i];
        sum += h[i];
    }
    ll cost[2][sum+5];
    memset( cost, -1, sizeof( cost));
    cost[0][0] = 0;

    ll total = 0;
    for(i=1; i<=m; i++ ) {
        for( j=1; j<=sum; j++ ) {
            cost[1][j] = cost[0][j];
            if( j-h[i] >=0 && cost[0][j-h[i]] != -1 && (cost[0][j-h[i]]+c[i]) <= total ) {
                if( cost[1][j] == -1 || (cost[0][j-h[i]] + c[i]) < cost[1][j] )
                    cost[1][j] = cost[0][j-h[i]] + c[i];
            }
        }
        for( j=1; j<=sum; j++ )  {
            cost[0][j] = cost[1][j];
        }
        total += x;
    }
    for( i=sum; i>=0; i--) {
        if( cost[0][i] >= 0 )  {
            cout << i<<endl;
            return;
        }
    }


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
