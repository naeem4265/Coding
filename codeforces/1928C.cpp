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
    cin >> n >> x;
    map<ll,bool> mp;
    ll ans = 0;
    m = n-x;
    for(i=1; i*i <= m; i++ ) {
        if( m%i == 0 ) {
            j = m/i;
            if( i%2==0 && (1+i/2)>=x && mp[i]==0 ) {
                ans++;
                mp[i] = 1;
            }
            if( i!=j && j%2==0 && (1+j/2)>=x && mp[j]==0 )  {
                ans++;
                mp[j] = 1;
            }
        }
    }
    if( x==1 )   {
        cout << ans <<endl;
        return;
    }
    m = n + (x-2);
    for(i=1; i*i <= m; i++ ) {
        if( m%i == 0 ) {
            j = m/i;
            if( i%2==0 && (1+i/2LL)>x && mp[i]==0 ) {
                ans++;
                mp[i] = 1;
            }
            if( i!=j && j%2LL==0 && (1+j/2)>x && mp[j]==0 )  {
                ans++;
                mp[j] = 1;
            }
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
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
