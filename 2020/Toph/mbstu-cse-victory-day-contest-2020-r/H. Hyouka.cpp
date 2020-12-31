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
    cin >> n >> k;
    ll D[n+5];
    for(i=0; i<n; i++) cin >> D[i];
    sort(D,D+n);
    ll mx=1,l=1,r=1e18;
    while(l<=r)
    {
        m = (l+r)/2;
        ll ct = 0;
        for(i=n-1; i>=0; i--)
        {
            ct += D[i]/m;
        }
        if(ct<k) r=m-1;
        else
        {
            mx = m;
            l = m+1;
        }             // cout <<l<<" "<<r<<" "<<m<<" "<<ct<<' '<<mx<<endl;
    }
    cout <<mx<<endl;
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

