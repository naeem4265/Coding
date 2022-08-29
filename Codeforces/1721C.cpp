#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    ll a[n+5];
    ll b[n+5];
    ll mn[n+5],mx[n+5];
    for(i=0; i<n; i++)  cin >> a[i];
    for(i=0; i<n; i++)  cin >> b[i];
    ll r = n-1,l=n-1;
    for(i=n-1; i>=0; i--)
    {
        while(l>=0 && b[l]>=a[i]) l--;
        l++;
        mn[i] = b[l] - a[i];
        mx[i] = b[r] - a[i];
        if(l==i) r = i-1;
    }
    for(i=0; i<n; i++)  cout <<mn[i]<<" "; cout <<endl;
    for(i=0; i<n; i++)  cout <<mx[i]<<" "; cout <<endl;


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
        Please_AC(t);
    return 0;
}
