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

ll bigmod(ll b,ll p)
{
    ll ans=1;
    while(p)
    {
        if(p&1)
            ans = (ans*b)%Mod;
        b = (b*b)%Mod;
        p = p/2;
    }
    return ans;
}

void solve(int t)
{
    ll i,j,n,k,ans=0;
    cin >> n ;
    if(n==0)
    {
        cout <<1<<endl;
        return ;
    }
    if(n<100)
    {
        ans = 1+(n*n*(n+1)*(2*n+1))/96+(24*n*n*(n+1))/96+n*n;
        cout <<ans<<endl;
        return ;
    }
    ll m = (n/96)%Mod;
    n = n%Mod;
    ans = (((m*n)%Mod*(n+1))%Mod*(2*n+1))%Mod+((24*m*n)%Mod*(n+1))%Mod+(n*n)%Mod;
    cout <<ans<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

