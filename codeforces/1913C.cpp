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
    ll ace[41];
    memset(ace, 0, sizeof(ace));

    while(n--) {
        ll type, v;
        cin >> type >> v;
        if( type == 1 ) {
            ace[v]++;
        } else {  
            ll temp = 0;   
            for(i=40; i>=0; i-- ) {
                temp = temp*2LL;
                if( v & (1LL<<i) )
                    temp++;
                temp -= min(temp, ace[i]);
            }
            if( !temp ) cout << "YES\n";
            else        cout << "NO\n";    
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
    //cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
