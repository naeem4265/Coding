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
bool vis[limit];
int cnt[limit],rem[limit];
void solve(int t)
{
    ll i,j,n,x,m,d,l=0,r=0,ct=0,a=0,ans=0;
    cin >> n >> x >> m;
    for(i=1; ; i++)
    {
        d = x%m;
        x = (x*x)%m;
        rem[i] = d;
        if(vis[d])
        {
            l = cnt[d];
            r = i-1;
            break;
        }
        cnt[d] = i;
        vis[d] = 1;  //cout <<i<<" "<<n<<" "<<d<<endl;
        if(i==n)
        {
            for(j=1; j<=n; j++)
                ans = (ans+rem[j]);
            cout <<ans<<endl;
            return ;
        }
    }
    ct = r-l+1;
    for(i=l; i<=r; i++)
        ans = (ans+rem[i]);
    n = n-l+1;
    a = n/ct;
    n = n%ct;
    ans = (ans*a);
    for(i=1; i<l; i++)
        ans = (ans+rem[i]);
    for(i=l,j=0; j<n; i++,j++)
        ans = (ans+rem[i]);
    cout <<ans<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
 //   cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}


