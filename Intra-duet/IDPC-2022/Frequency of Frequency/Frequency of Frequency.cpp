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
    for(i=0; i<n; i++)
        cin >> d[i];
    d[n] = Mod;
    sort(d,d+n);
    ll ct[n+5];

    ll mx = 0,len = 0;
    memset(ct, 0, sizeof(ct));
    for(j=0,i=0; i<=n; i++)
    {
        if(d[i]!=d[j])
        {
            ct[i-j]++;   //cout <<i<<" "<<j<<" "<<ct[i-j]<<" "<<mx<<endl;
            if(mx==ct[i-j])
            {
                len = min(len, i-j);
            }
            if(mx<ct[i-j])
            {
                mx = ct[i-j];
                len = i-j;
            }
            j = i;
        }
    }
    cout << len <<endl;

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
