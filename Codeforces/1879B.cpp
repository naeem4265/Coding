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
    ll a[n+5],b[n+5];
    for(i=0; i<n; i++)   cin >> a[i];
    for(i=0; i<n; i++)   cin >> b[i];
    sort(a, a+n);
    sort(b, b+n);
    ll suma=0,sumb=0;
    for(i=0; i<n; i++)   suma += a[i];
    for(i=0; i<n; i++)   sumb += b[i];
    cout << min(suma+n*b[0], sumb+n*a[0]) <<endl;

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
