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

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n;
    ll d[n+5],mx=0,mn=0;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        if(d[i]>d[mx])
            mx = i;
        if(d[i]<d[mn])
            mn = i;
    }
    ll ans=0;
    if(mx<mn) swap(mx,mn);
                   //cout << mn <<" "<<mx<<endl;
    for(i=0,j=n-1; i<n; i++,j--)
    {
        ans++;
        if(i==mx)
            break;
    }
    ll temp = ans;
    ans = 0;
    for(i=0,j=n-1; i<n; i++,j--)
    {
        ans++;
        if(j==mn)
            break;
    }
    temp= min(temp,ans);
    ans = 0;
    for(i=0; i<n; i++)
    {
        ans++;
        if(i==mn) break;
    }
    for(i=n-1; i>=0; i--)
    {
        ans++;
        if(i==mx) break;
    }
    temp= min(temp,ans);
    cout << temp << endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
