#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(int t)
{
    ll a,k,i,j,n,mx=0,ct=0,ans=0,ct1,ct2;
    cin >> n;
    ll A[n+5],B[n+5],mn1=10000000000000,mn2=10000000000000;
    for(i=0; i<n; i++)
    {
        cin >> A[i];
        if(A[i]<mn1)
            mn1=A[i];
    }
    for(i=0; i<n; i++)
    {
        cin >> B[i];
        if(B[i]<mn2)
            mn2=B[i];
    }
    for(i=0; i<n; i++)
    {
        ct1 = A[i]-mn1;
        ct2 = B[i]-mn2;
        ct = min(ct1,ct2);
        ans += ct+max(ct1,ct2)-ct;   //cout <<ct1<<" "<<ct2<<" "<<ct<<" "<<ans<<endl;
    }
    cout <<ans<<endl;
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

