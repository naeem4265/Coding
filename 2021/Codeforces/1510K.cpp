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
    ll i,j,n,m,k;
    string s;
    cin >> n ;
    m = n;
    n = 2*n;
    ll a[n+5],b[n+5],ct=0,ct2=0;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    bool ok=0;
    for(i=0; i<n; i++)
    {
        for(j=1; j<n; j++)
        {
            if(a[j-1]>a[j]) break;
        }
        if(j==n)
        {
            ok = 1;
            break;
        }
        if(i&1)
            for(j=1; j<n; j+=2)
            {
                swap(a[j-1],a[j]);
            }
        else
            for(j=0; j<m; j++)
            {
                swap(a[j],a[j+m]);
            }
        ct++;
    }

    for(i=0; i<n; i++)
    {
        for(j=1; j<n; j++)
        {
            if(b[j-1]>b[j]) break;
        }
        if(j==n)
        {
            ok = 1;
            break;
        }
        if(i&1)
            for(j=0; j<m; j++)
            {
                swap(b[j],b[j+m]);
            }
        else
            for(j=1; j<n; j+=2)
            {
                swap(b[j-1],b[j]);
            }
        ct2++;
    }
    if(ok)
    {
        cout << min(ct,ct2) <<endl;
    }
    else
    {
        cout << -1 <<endl;
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
