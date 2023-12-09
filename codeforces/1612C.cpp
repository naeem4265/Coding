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

void solve(ll tt)
{
    ll i,j,n,m,k,x;
    string s;
    cin >> k >> x;
    m = k*(k+1)/2;
    ll ans =0;
    if(m<x)
    {
        ans = k;
        x -= m;
    }
    else
    {
        n = (-1+sqrt(1+8LL*x))/2;
        m = n*(n+1)/2;
        if(m<x) n++;
        cout <<n<<endl;
        return ;
    }
    k--;
    m = k*(k+1)/2;
    if(m<x)
    {
        ans += k;
        x -= m;
        cout << ans <<endl;
        return ;
    }
    else
    {         //cout <<ans<<" "<<x<<" "<<k<<endl;
        ll l=1,h = k,mid,temp=0;
        while(l<=h)
        {
            mid = (l+h)/2;
            ll len = k-mid+1;
            m = len*(2ll*mid+len-1)/2; //cout <<m<<" "<<x<<" "<<l<<" "<<h<<" "<<len<<endl;
            if(m>=x)
            {
                temp = len;
                l = mid+1;
            }
            else
                h = mid-1;
        }
        cout << ans+temp <<endl;
    }
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
