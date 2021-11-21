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

void solve(ll t)
{
    ll i,j,n,m=1,k,sum,a,ans=0,temp,nine=9;
    cin >> n >> k;
    temp = k;
    k++;
    sum = 1;
    while(k)
    {
        a = (2*n+k-k*k)/(2*k);
        sum = k*(2*a+k-1)/2;  //cout <<n<<' '<<k<<' '<<sum<<" "<<a<<endl;
        if(a<0)
        {
            cout << -1 <<endl;
            return ;
        }
        if(sum==n)
        {
            if(m!=1 && a<(10-m))
            {
                n = n-m;
                k--;
                m++;
                continue;
            }
            ans = min(10-k,a);
            a -= ans;
            sum = 10;
            while(a)
            {
                ans = ans+sum*min(nine,a);
                a -= min(nine,a);
                sum *=10;
            }
            cout << ans <<endl;   for(i=0; i<=temp; i++) cout <<ans++<<" "; cout <<endl;
            return ;
        }

        n = n-m;
        k--;
        m++;
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


