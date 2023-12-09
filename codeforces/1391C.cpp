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

ll bigmod(ll x,ll y)
{
    if(y==0) return 1;
    ll temp;
    temp = bigmod(x,y/2);
    temp = (temp*temp)%Mod;
    if(y&1)
        temp = (temp*x)%Mod;
    return temp;
}
int  main()
{
//    Fast
    ll a,k,i,j,n,mx=0,ct=1,sum=0,ans=1;
    cin >> n;
    for(i=1; i<=n; i++)
    {
        ans = (ans*i)%Mod;
    }
    for(i=2; i<=n; i++)
    {
        sum = (sum+bigmod(2,i-2))%Mod;
    //cout <<sum<<" "<<ans<<endl;
    }
    sum = (sum+1)%Mod;
    mx = ans-sum;
    if(mx<0)
        mx = mx+Mod;
    cout <<mx<<endl;
  return 0;
}


