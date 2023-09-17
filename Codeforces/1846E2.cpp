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

bool check(ll mx, ll n)
{
    ll lo=2, hi = 1e9+2, m;
    while(lo<=hi)
    {
        m = (lo+hi)/2;
        ll sum = 1, temp = 1;
        for(ll i=1; i<=mx && sum<=n && sum>0 && temp>0; i++)
        {
            temp = temp*m;
            sum += temp;
        }
        if(sum==n)  return 1;
        if(sum<n && sum>0)   lo = m+1;
        else  hi = m-1;
    }
    return 0;
}
void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    for(i=2; i<61; i++)
    {
        if(check(i, n))
        {
            cout <<"YES\n";
            return;
        }
    }
    cout <<"NO\n";

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
