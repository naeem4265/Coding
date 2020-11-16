#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 200008
using namespace std;
vector<ll> ct[limit];
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
    ll i,j,n,m,k,a;
    scanf("%lld",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lld",&a);
        for(j=2; j*j<=a; j++)
        {
            int x=0;
            while(a%j==0)
            {
                a /= j;
                x++;
            }
            if(x)
                ct[j].pb(x);
        }
        if(a>1)
            ct[a].pb(1);
    }
    ll ans=1;
    for(i=2; i<limit; i++)
    {
        int sz=ct[i].size();    //cout <<i<<" "<<sz<<" "<<ans<<endl;
        if(sz==n)
        {
            sort(ct[i].begin(),ct[i].end());
            ans = ans*(bigmod(i,ct[i][1]));
        }
        if(sz==n-1)
        {
            sort(ct[i].begin(),ct[i].end());
            ans = ans*(bigmod(i,ct[i][0]));
        }
    }
    printf("%lld\n",ans);
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

