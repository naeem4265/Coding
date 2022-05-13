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
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll l[n+5],r[n+5],c[n+5],mn=1e18,mx=-1,mnc=0,mxc=0,tot=n+2;
    c[n+2] = 1e18;

    for(i=0; i<n; i++)
    {
        cin >> l[i] >> r[i] >> c[i];
        if(l[i]<mn || (l[i]==mn && c[mnc]>c[i]))
        {
            if(l[i]<mn) tot=n+2;
            mn = l[i];
            mnc = i;
        }
        if(r[i]>mx || (r[i]==mx && c[mxc]>c[i]))
        {
            if(r[i]>mx) tot=n+2;
            mx = r[i];
            mxc = i;
        }
        if(l[i]==mn && r[i]==mx)
        {
            if(c[tot]>c[i])
                tot = i;
        }

        if((l[mnc]==l[mxc] && r[mnc]==r[mxc]))
        {
            cout << min({c[mnc],c[mxc],c[tot]})<<"\n";
        }
        else if(mn==l[mxc])
        {
            cout <<c[mxc]<<"\n";
        }
        else if(mx==r[mnc])
        {
            cout <<c[mnc]<<"\n";
        }
        else
        {
            cout <<min(c[mnc]+c[mxc],c[tot])<<"\n";
        }
    }
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
