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
#define limit 100002
using namespace std;

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n;
    ll d[n+5];
    bool ok=0;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        if(d[i]==0)
            ok = 1;
    }
    sort(d,d+n);
    for(i=1; i<n; i++)
    {
        if(d[i]==d[i-1])
            ok = 1;
    }
    if(ok)
    {
        cout <<"YES\n";
        return ;
    }
    ll x,y,z;
    for(i=-limit; i<limit; i++)
    {
        for(j=1; j<n; j++)
        {
            x = d[0] - (d[j]-i);
            for(k=1; k<n; k++)
            {
                if(j==k) continue;
                y = d[k]-i;
                z = i-d[k];
                if(x==y || x==z)
                {        cout <<i<<endl;
                    cout <<"YES\n";
                    return ;
                }
            }
            x =(d[j]-i) - d[0];
            for(k=1; k<n; k++)
            {
                if(j==k) continue;
                y = d[k]-i;
                z = i-d[k];
                if(x==y || x==z)
                {
                    cout <<"YES\n";
                    return ;
                }
            }
        }
    }
    cout <<"NO\n";
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
