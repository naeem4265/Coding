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

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n;
    if(n&1)
    {
        for(i=2; i<=n-3; i+=2)
            cout << i <<" "<<i-1<<" ";
        i = n;
        cout <<i<<" "<<i-2<<" "<<i-1<<endl;
    }
    else
    {
        for(i=2; i<=n; i+=2)
            cout << i <<" "<<i-1<<" ";
            cout << endl;
    }
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
