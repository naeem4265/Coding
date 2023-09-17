#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 30;
const ll Mod = 1e9+7;
using namespace std;
ll fib[limit];

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n >> k;
    ll ans=0;
    if(k>=limit)
    {
        cout <<0<<endl;
        return;
    }
    for(ll a=0; a<n; a++)
    {
        ll temp = n-fib[k-2]*a;
        if(temp%fib[k-1])  continue;
        ll b = temp/fib[k-1];
        if(b>=0 && b<=n && a<=b)  ans++;
       // cout <<fib[k-2]<<" "<<fib[k-1]<<" "<<a <<" "<<b<<" "<<ans<<endl;
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
    fib[0] = 0;
    fib[1] = 1;
    fib[2] = 1;
    for(ll i=3; i<limit; i++)
    {
        fib[i] = fib[i-1]+fib[i-2];
    }
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
