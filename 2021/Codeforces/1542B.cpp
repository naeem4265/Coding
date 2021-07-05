#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    ll a,b;
    cin >> n >> a >> b;
    if(a==1)
    {
        n--;
        if(n%b==0)
        {
            cout <<"Yes\n";
        }
        else
            cout <<"No\n";
        return ;
    }
    ll p=1;
    while(1)
    {
        if((n-p)%b==0)
        {            //cout <<n<<" "<<p<<" "<<n-p<<" "<<(n-p)%b<<endl;
            cout <<"Yes\n";
            return ;
        }
        p = p*a;
        if(p>n)
        {
            cout <<"No\n";
            return ;
        }
    }

    return ;
}
int  main()
{
 //   Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
