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
ll Pow(ll x,ll y)
{
    if(y==0)
        return 1;
    ll t=Pow(x,y/2);
    t = t*t;
    if(y&1) t = t*x;
    return t;
}
void solve(int t)
{
    ll a,k,i,j,n,mx=0,ct=0,sum=0,temp,x,last;
    cin >> n >> k;
    if(n<10)
    {
        if(n==(k-1))
            cout <<max((ll)2,n+1)<<endl;
        else
            cout <<-1<<endl;
        return ;
    }
    k--;
    temp = n;
    for(x=2; x<11; x++)
    {
        n = temp;
        ct = 0;
        sum = 0;
        while(n)
        {
            last = n%10;
            n /=10;
            if(last>=x) break;
            sum += last*Pow(x,ct);
            ct++;
        }
        if(sum==k)
        {
            cout <<x<<endl;
            return ;
        }
    }
    cout <<-1<<endl;
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

///Accepted
