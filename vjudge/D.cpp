#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e2+5;
const ll Mod = 1e9+7;
using namespace std;
ll n,k,d;
ll a[limit], csum[limit];

ll rec(ll pos, ll sum, ll t)
{
    if(pos==n)
    {
        if(t==k && sum%d==0)   return sum;
        return -1;
    }
    if((n-pos+t)<k)   return -1;
    if(t==k)
    {
        if(sum%d)    return -1;
        else   return sum;
    }
    if((n-pos+t)==k)
    {
        if((sum+csum[pos])%d)   return -1;
        return sum+csum[pos];
    }
    ll x = rec(pos+1, sum, t);
    ll y = rec(pos+1, sum+a[pos], t+1);
    if(x>=y)  return x;
    return y;
}


void Please_AC(ll tt)
{
    ll i;
    //cin >> n >> k >> d;
    scanf("%lld %lld %lld", &n, &k, &d);
    for(i=0; i<n; i++)
    {
        //cin >> a[i];
        scanf("%lld", &a[i]);
    }
    csum[n] = 0;
    for(i=n-1; i>=0; i--)
    {
        csum[i]  = csum[i+1]+a[i];
    }

   // cout << rec(0, 0, 0 ) <<endl;
   printf("%lld\n", rec(0, 0, 0));


    return ;
}


int  main()
{
    //Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
