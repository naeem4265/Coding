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
vector<ll> a;
ll mn;

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    a.resize(n);
    for(i=0; i<n; i++)   cin >> a[i];
    ll ans = 0;
    mn = a[n-1];

    for(i=n-2; i>=0; i--){
        if(a[i]<=a[i+1])   continue;
        ll temp = a[i]/a[i+1];
        temp += (a[i]%a[i+1]) ? 1 : 0;
        ans += temp-1 ;
        a[i] = a[i]/temp;     //cout <<i<<" "<<ans<<" "<<a[i]<<" "<<temp<<endl;
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
