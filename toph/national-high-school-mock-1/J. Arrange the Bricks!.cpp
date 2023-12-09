#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define TC int tt; cin >> tt; for(int t=0; t<tt; t++)
#define ll long long int
#define inf 1e18
#define pb push_back
#define Mod 1000000007
#define limit 20000008
using namespace std;
bool vis[limit];
vector <ll> prime;
void seive()
{
    for(int i=4; i<limit; i+=2)
    {
        vis[i]=1;
    }
    for(int i=3; i*i<limit; i+=2)
    {
        for(int j=i*i; j<limit; j+=2*i)
            vis[j]=1;
    }
    for(int i=2; i<limit; i++) if(vis[i]==0)  prime.pb(i);
}
void solve(int t)
{
    ll i=2,j,n,k=1,ct=1;
    cin >> n;
    ll ans=1;
    while(n%2==0)
    {
        ct++;
        n/=2;
    }
    ans = ct+1;
    while(prime[k]*prime[k]<=n+1)
    {                     //cout <<n<<" "<<prime[k]<<endl;
        ct=0;
        while(n%prime[k]==0)
        {
            n /= prime[k];
            ct++;          //cout <<ct<<" "<<prime[k]<<" "<<n<<endl;
        }
        k++;
        ans = ans*(ct+1);
    }
    if(n>1)
        ans = ans*2;
    cout <<(ans+1)/2<<endl;
}
int  main()
{
    Fast
//    Freed
//    Fout
    seive();  //for(int i=0; i<prime.size(); i++)  cout <<prime[i]<<endl;
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}
