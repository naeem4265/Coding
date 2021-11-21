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

ll n;

vector<ll> v;

ll rec(ll k)
{
    while(k--)
    {
        ll y = n,x = n,a=0,b=0,i;
        v.clear();
        while(x)
        {
            ll d = x%10;
            x /= 10;
            v.pb(d);
        }
        if(v.size());
            sort(v.begin(),v.end());
        for(i=v.size()-1; i>=0; i--)
        {
            a = a*10+v[i];
        }
        v.clear();
        while(y)
        {
            ll d = y%10;
            y /= 10;
            v.pb(d);
        }
        if(v.size());
            sort(v.begin(),v.end());
        x = v.size();
        for(i=0; i<x; i++)
        {
            b = b*10+v[i];
        }         //cout <<k<<" "<<a<< " " <<b<<endl;
        n = a-b;
    }
    return n;

}

void solve(int t)
{
    ll i,j,m,k;
    cin >> n >> k;
    cout << rec(k) <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
