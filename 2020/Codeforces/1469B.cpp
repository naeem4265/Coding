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

void solve(ll tc)
{
    ll i,j,n,m,k;
    cin >> n ;
    ll A[n+5];
    A[0]=0;
    ll mx=0,mx2=0;
    for(i=1; i<=n; i++)
    {
        cin >> A[i];
        A[i] += A[i-1];
        mx = max(mx,A[i]);
    }
    cin >> m;
    ll B[m+5];
    B[0]=0;
    for(i=1; i<=m; i++)
    {
        cin >> B[i];
        B[i] += B[i-1];
        mx2=max(mx2,B[i]);
    }

    cout <<mx+mx2<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
    cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

