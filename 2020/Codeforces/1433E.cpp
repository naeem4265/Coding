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
ll ct[25];

///nCr O(n*r)
long long int ncr[200][200];
long long int nCr(long long int n, long long int r)
{
    if(n==r) return 1;
    if(r==1) return n;
    if(ncr[n][r]) return ncr[n][r];
    return ncr[n][r] = (nCr(n-1,r-1)+nCr(n-1,r))%Mod;
}

void solve(int t)
{
    ll i,j,n,m,k;
    cin >> n ;
    ll ans=0,fact=1;
    ans = nCr(n,n/2);
    n = n/2;
    for(i=1; i<n; i++)
        fact = fact*i;
    cout <<ans*fact*fact/2<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

