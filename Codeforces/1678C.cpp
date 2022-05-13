#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 5005
using namespace std;


ll mn[limit][limit],mx[limit][limit];

void solve(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n;
    ll d[n+5];
    for(i=1; i<=n; i++)  cin >> d[i];

    for(i=0; i<=n; i++)
        mn[0][i] = 0;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            mn[j][i] = mn[j-1][i];
            if(d[j]<i)  mn[j][i]++;
        }
    }

    for(i=0; i<=n; i++)
        mx[n+1][i] = 0;
    for(i=1; i<=n; i++)
    {
        for(j=n; j>0; j--)
        {
            mx[j][i] = mx[j+1][i];
            if(d[j]<i)  mx[j][i]++;
        }
    }

    long long int ans=0,a,dd;
    for(i=2; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            dd = mx[j+1][d[i]];
            a = mn[i-1][d[j]];
            ans += a*dd;   //cout <<i<<" "<<j<<" "<<a<<" "<<dd<<" "<<ans<<endl;
        }
    }
    cout << ans <<endl;
    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
