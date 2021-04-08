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
    ll i,j,n,m,k;
    string s;
    cin >> n ;
    ll ct[n+5];
    for(i=1; i<=n; i++) cin >> ct[i];
    bool vis[n+5];
    for(i=0; i<n+5; i++) vis[i]=0;

    ll mx = 0;
    for(i=n; i>0; i--)
    {
        mx = max(mx,ct[i]);
        if(mx) vis[i] = 1;
        mx--;
    }
    for(i=1; i<=n; i++)
    {
        cout << vis[i] <<" ";
    }
    cout <<endl;
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
