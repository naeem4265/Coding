#include<iostream>
#define ll int 
using namespace std;


ll n,m, k, ans;
ll arr[16][16];
void toggle(ll pos ) {
    for(ll i=0; i<n; i++) {
        arr[i][pos] = !arr[i][pos];
    }
}

void rec(ll pos, ll rem) {    //cout <<pos<<" "<<rem<<endl;
    if( !rem ) { 
        ll cnt = 0;
        for(ll i=0,j; i<n; i++) {
            for(j=0; j<m; j++) {
                if( arr[i][j] == 0)   break;
            }
            if( j== m )  cnt++;
        }
        ans = max(ans, cnt);
        return;
    }
    if( pos==m )    return;

    rec( pos+1, rem);
    toggle(pos);         
    rec ( pos, rem-1);
    toggle(pos);
}


void Please_AC(ll tt)
{
    cin >> n >> m >> k;
    for(ll i=0; i<n; i++) {
        for(ll j=0; j<m; j++)    cin >> arr[i][j];
    }

    ans = 0;
    rec( 0, k );
    cout << ans <<endl;


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
