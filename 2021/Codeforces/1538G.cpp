#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;
ll x,y,a,b;

bool rec(ll ct)
{
    ll l=1,r=ct;
    ll temp2=0,temp,m;
    while(l<=r)
    {
        m = (l+r)/2;
        temp = m*b+(ct-m)*a;
        if(y>=temp)
        {
            l = m+1;
            temp2 = m;
        }
        else
        {
            r = m-1;
        }
    }
    temp = temp2*a+(ct-temp2)*b;
    if(x>=temp) return 1;
    else return 0;
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> x >> y >> a >> b;
    if(x > y) swap(x,y);
    if(a > b) swap(a,b);

    ll ans = 0;
    ll l=1,r=Mod;
    while(l<=r)
    {
        m = (l+r)/2;
        if(rec(m))
        {
            ans = m;
            l = m+1;
        }
        else
        {
            r = m-1;
        }
    }
    cout << ans << endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
