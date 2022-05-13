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

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n >> k;
    if(n==1)
    {
        if(k==2)
            cout <<2<<endl;
        else if(k)
            cout <<1<<endl;
        else
            cout <<0<<endl;
        return ;
    }
    m = (n+1)*(n-1);
    k -= m;
    if(k<0)  k=0;
    ll ans = 0;
    m = n*n-1;
    ans = k/m;
    if(k%m)
        ans++;
    cout << ans <<endl;


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
