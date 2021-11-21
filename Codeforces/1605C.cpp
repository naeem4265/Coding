#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;
string s;
ll n;
bool check(ll x)
{
    ll i,j,k;
    for(i=0; i<n; i++)
    {
        ll a=0,b=0,c=0;
        for(j=i,k=0; j<n && k<x; k++,j++)
        {
            if(s[j]=='a')      a++;
            else if(s[j]=='b') b++;
            else              c++;
        }
        if(a>b && a>c)
        {
            return true;
        }
    }
    return false;
}

void solve(ll tt)
{
    ll i,j,k;
    cin >> n;
    cin >> s;

    ll ans;

    for(i=2; i<=100; i++)
    {
        if(check(i))
        {
            cout <<i<<endl;
            return ;
        }
    }
    cout << -1 <<endl;

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
