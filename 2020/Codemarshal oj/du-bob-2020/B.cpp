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
    ll i,j,n,m,k,x,y,z;
    scanf("%lld %lld %lld %lld",&k,&x,&y,&z);

    ll ans = (bigmod(10,k)*x*y)/(z-y);
    ll sum = 0;
    while(ans)
    {
        sum += ans%10;
        ans /=10;
    }
    printf("Winning percentage of Drump is: %lld\%\n",sum);
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    scanf("%d",&tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

