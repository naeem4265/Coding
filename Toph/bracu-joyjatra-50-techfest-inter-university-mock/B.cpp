#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(int t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n ;
    int d[n+5],ct[n+5];
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
        ct[i] = 0;
    }
    for(i=n-1; i>=1; i--)
    {
        if(d[i+1]-d[i]>=2)
        {
            if(ct[i+1])
                ct[i] = ct[i+1]+1;
            else
                ct[i] = 2;
        }
        else
            ct[i] = 0;
    }
    for(i=1; i<=n; i++) cout <<ct[i]<<endl;
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
