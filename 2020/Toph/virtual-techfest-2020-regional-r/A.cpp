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
    cin >> n ;
    vector<int>dig;
    while(n)
    {
        dig.pb(n&1);
        n/=2;
    }
    reverse(dig.begin(),dig.end());
    m = dig.size();
    for(i=0; i<m; i++)
        dig.pb(0);
    m = dig.size();
    k = 1;
    ll ans=0;
    for(i=m-1; i>=0; i--)
    {
        if(dig[i]&1)
            ans += k;
        k = k*2;
    }
    cout <<ans<<endl;
    return ;
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

