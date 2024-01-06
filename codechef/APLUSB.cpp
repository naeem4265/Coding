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
    ll a[n+5], cnt[1005], sum = 0;
    memset(cnt, 0, sizeof(cnt));
    bool ok = 1;

    for(i=0; i<n; i++ ) {
        cin >> a[i];
        sum += a[i];
    }
    for( i=0; i<n; i++ ) {
        cin >> m;
        sum += m;
        cnt[m]++;
    }
    if( sum%n )  ok = 0;
    sum = sum/n;

    for(i=0; i<n; i++ ) {
        if( sum<a[i] || cnt[sum - a[i]] <= 0 )  ok = 0;
        else  cnt[ sum - a[i]]--;
    }
    if( ok==0 ){
        cout << -1 <<endl;
        return;
    }
    for( i=0; i<n; i++ ) {
        cout <<a[i] <<" ";
    }
    cout << endl;
    for( i=0; i<n; i++ ) {
        cout << sum - a[i] <<" ";
    }
    cout << endl;

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
