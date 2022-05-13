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
    ll d[n+5];
    ll ct=0;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        if(d[i]<0) d[i] = -d[i];
    }
    sort(d,d+n);
    bool ok=0;

    for(i=0; i<n; i++)
    {
        ct++;
        ok = 0;
        for(j=i+1; j<n; j++)
        {
            if(d[j]!=d[i])
            {
                break;
            }
            ok = 1;
        }
        if(ok && d[i])
            ct++;
        i = j-1;
    }
    cout << ct <<endl;
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
