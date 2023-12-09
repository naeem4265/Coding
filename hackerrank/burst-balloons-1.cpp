#include<iostream>
#include<vector>
#define ll long long int
#define pb push_back
using namespace std;

vector<ll> vec;
ll n;
bool vis[15];

ll rec(ll ct) {
    if( 0 == ct) {
        return 0;
    }
    if( ct == 1 ) {
        for(ll i=0; i<n; i++)  {
            if( vis[i] == 0)   return vec[i];
        }
    }

    ll mx = 0;
    for(ll i=0; i<n; i++ ) {
        ll left = 1, right = 1;
        if( vis[i] )    continue;
        vis[i] = 1;
        for(ll j=i-1; j>=0; j--) {
            if(vis[j])   continue;
            left = vec[j];
            break;
        }
        for(ll j=i+1; j<n; j++) {
            if(vis[j])   continue;
            right = vec[j];
            break;
        }
        mx = max( mx, left*right + rec( ct-1 ) );
        vis[i] = 0;
    }      //cout <<ct<<" "<<mx<<endl;
    return mx;
}

void Please_AC(ll tt)
{
    ll i,j, m,k,q;

    cin >> n;
    vec.resize(n);

    for(i=0; i<n; i++)   cin >> vec[i];

    cout << rec( n ) <<endl;


    return ;
}


int  main()
{
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
