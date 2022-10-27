#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll d[n+5],sum=0;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        sum += d[i];
    }
    m = sqrt(sum+1);
    ll ans = n;
    for(i=1; i<=m; i++)
    {
        if(sum%i)  continue;
        ll mx = 0,ct=0,l;
        for(l=0,j=0; j<n; j++)
        {
            ct += d[j];
            if(ct==i)
            {
                ct = 0;
                mx = max(mx, j-l+1);
                l = j+1;
            }
            if(ct>i)  break;
        }
        if(j==n)
        {
            ans = min(ans, mx);
        }

        mx = 0,ct=0;
        for(l=0,j=0; j<n; j++)
        {
            ct += d[j];
            if(ct==(sum/i))
            {
                ct = 0;
                mx = max(mx, j-l+1);
                l = j+1;
            }
            if(ct>(sum/i))  break;
        }
        if(j==n)
        {
            ans = min(ans, mx);
        }       // cout <<i<<" "<<mx<<" "<<j<<endl;
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
        Please_AC(t);
    return 0;
}
