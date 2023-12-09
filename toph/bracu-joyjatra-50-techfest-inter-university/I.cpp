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

double bigmod(double b,ll p)
{
    if(p==0) return 1.00;

    double ans=bigmod(b,p/2);
    ans = (ans*ans)%Mod;
    if(p&1) ans=(b*ans)%Mod;
    return ans;
}

void solve(int t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n >> k >> m;
    k = 2*k;
    double a,b,c;
    a = sqrt(n)*1.00+sqrt(n+1.00)*1.00;
    b = bigmod(a,k);
    n = (ll)b;
    n = n - (n/m)*m;
    cout << n <<endl;
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
