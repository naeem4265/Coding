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

void solve(int t)
{
    int i,j,n,m,k;
    cin >> n ;
    ll D[n+5];
    D[1] = 0;
    ll sum = 0,need=0,ok=1;
    for(i=0; i<n; i++)
    {
        cin >> D[i];
    }
    for(i=0; i<n; i++)
    {
        need += i;
        sum += D[i];
        if(sum <need) ok=0;
    }
    m = n*(n-1)/2;
    if(ok==0)
        cout <<"NO\n";
    else
        cout <<"YES\n";
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
