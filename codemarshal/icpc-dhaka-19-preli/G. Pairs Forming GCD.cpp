#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 10000008
using namespace std;
ll coprime[limit];

bool vis[limit];
void seive()
{
    vis[0]=vis[1]=1;
    for(int i=4; i<limit; i+=2) vis[i] = 1;
    for(int i=3; i*i<limit; i+=2)
    {
        if(vis[i]) continue;
        for(int j=i*i; j<limit; j+=2*i)
        {
            vis[j] = 1;
        }
    }
}

void solve(int t)
{
    ll i,j,n,p,k;
    scanf("%lld %lld",&n,&p);
    ll l=1,h=n,m,ans=-1;
    while(l<=h)
    {
        m = (l+h)/2;
        k = n/m;         // cout <<m<<" "<<k<<" "<<coprime[k]<<" "<<p<<" "<<ans<<endl;
        if(coprime[k]>=p)
        {
            l = m+1;
            ans = m;
        }
        else
            h = m-1;
    }
    printf("Case %d: %lld\n",t,ans);
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    seive();
    ll i,j,cp;
    for(i=1; i<limit; i++) coprime[i]=i;

    for(int i=2; i<limit; i++)
    {
        if(!vis[i])
            for(j=i; j<limit; j+=i)
                coprime[j] = (coprime[j]*(i-1))/i;
        coprime[i] += coprime[i-1];
    }
    int t,tt=1;
    scanf("%d",&tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

