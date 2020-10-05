#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 100008
using namespace std;
bool vis[limit];
vector<ll> prime;
ll cnt[10000];
void seive()
{
    ll i,j;
    for(i=3; i*i<limit; i+=2)
    {
        if(vis[i]==0)
        for(j=i*i; j<limit; j+=2*i)
            vis[j]=1;
    }
    prime.pb(2);
    for(i=3; i<limit; i+=2)
        if(vis[i]==0)
            prime.pb(i);
}
void solve(int t)
{
    ll a,k,i,j,n,mx=0,ct=1,sum=0,q,ans=1,temp;
    //cin >> n;
    scanf("%lld",&n);
    for(i=0; i<n; i++)
    {
        //cin >> a;
        scanf("%lld",&a);
        temp = a;
        ans = 1;
        for(j=0; prime[j]*prime[j]<=a+1; j++)
        {
            ct = 0;   //cout <<prime[j]<<" "<<j<<endl;
            while(a%prime[j]==0)
            {
                a/=prime[j];
                ct++;
            }
            ans *= (ct+1);
        }
        if(a>1)
            ans *= (2);
        cnt[ans] += temp;
    }
    cnt[0]=0;
    for(i=1; i<10000-5; i++)
        cnt[i] = cnt[i-1]+cnt[i];
    //cin >> q;
    scanf("%lld",&q);
    for(i=0; i<q; i++)
    {
        //cin >> a;
        scanf("%lld",&a);
        if(a>=(10000-5))
            printf("%lld\n",cnt[10000-10]);
        else
            printf("%lld\n",cnt[a]);
    }
}
int  main()
{
 //   Fast
//    Freed
//    Fout
    seive();
    int t,tt=1;
  //  cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}
///Accepted
