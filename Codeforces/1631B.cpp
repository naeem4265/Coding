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
    ll a[n+5];
    for(i=0; i<n; i++)
        cin >> a[i];

    ll ct = 0;
    for(i=n-1; i>=0; )
    {
        if(a[i]==a[n-1])
        {
            i--; continue;
        }
        m = n-i-1;
        ll ok=0;     //cout <<m<<endl;
        for(j=0; j<m && i>=0; j++,i--)
        {
            if(a[i]!=a[n-1])
            {
                a[i] = a[n-1];
                ok = 1;
            }
        }  //cout <<i<<" "<<ok<<" "<<ct<<endl;
        ct += ok;
    }
    cout << ct <<endl;
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
