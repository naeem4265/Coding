#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e14
#define Mod 1000000010
#define limit 1000010
using namespace std;
ll Pow(int b,int p)
{
    if(p==0) return 1;
    ll z=Pow(b,p/2);
    if(z>10000000) z = 0;
    z = z*z;
    if(p&1)
        z = z*b;
    return z;
}
void solve(int t)
{
    ll i,j,n,m,ans=inf;
    cin >> n;
    ll D[n+5];
    for(i=0; i<n; i++)
    {
        cin >> D[i];
    }
    sort(D,D+n);
    ll l=0,r=inf,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        ll z = Pow(mid,n-1);
        if(z<=0 || z>inf)
            r = mid-1;
        else
            l = mid+1;
    }
    for(i=1; i<=mid; i++)
    {
        ll ct=0,z=1;
        bool ck=1;
        for(j=0; j<n; j++)
        {
            if(z<=0 || z>=inf){
                ck = 0;
                break;
            }
            ct += abs(D[j]-z);  //cout <<j<<" "<<ct<<" "<<D[j]<<endl;
            z = z*i;
        }
        if(ck)
            ans = min(ans,ct);
             //cout <<i<<" "<<ct<<" "<<ans<<endl;
    }
    cout <<ans<<endl;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
 //   cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}

