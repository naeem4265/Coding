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
ll a[limit],b[limit],n;

bool check(ll k)
{
    ll rem = k-1,taken = 0;
    for(ll i=1; i<=n; i++)
    {        //cout <<a[i]<<" "<<rem<<" "<<b[i]<<" "<<taken<<" "<<k<<endl;
        if(a[i]>=rem && b[i]>=taken)
        {
            rem--;
            taken++;
            k--;
            if(k==0) return true;
        }
    }
    return false;
}
void solve(ll tt)
{
    ll i,j,m,k,q;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> a[i] >> b[i];
    }
    ll l=1,h=n,ans=1;
    while(l<=h)
    {
        m = (l+h)/2;
        if( check(m) )
        {
            l = m+1;
            ans = m;
        }
        else
        {
            h = m-1;
        }
    }

    cout << ans <<endl;
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
