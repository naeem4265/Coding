#include<iostream>
#define ll long long int
using namespace std;
ll dis[13][13], n;

ll rec(ll pos, ll vis) {  //cout <<pos<<" "<<vis<<endl;
    if( vis == ((1LL<<n) - 1))    return dis[pos][0];
    ll mn = 1e16;

    for(ll i=1; i<n; i++) {
        ll temp = 1LL<<i;
        if( (vis&temp) ==0LL ) {
            mn = min(mn, dis[pos][i] + rec(i, vis|(1LL<<i)));
        }        //cout <<i<<" "<<mn<<" "<<temp<<" "<<pos<<endl;
    }            
    return mn;
}

void Please_AC(ll tt)
{
    ll i,j;
    cin >> n;
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++)  cin >> dis[i][j];
    }
    cout << rec( 0, 1 ) <<endl;



    return ;
}


int  main()
{
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
