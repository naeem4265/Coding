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
    ll sum=0;
    ll D[n+5];
    for(i=0; i<n; i++)
    {
        cin>> D[i];
        sum += D[i];
    }
    sum -= D[n-1];
    ll x,mx = 0;
    sum  = D[0];
    for(i=1; i<n; i++)
    {
        double a = (double)D[i],b = (double)k;
        x = ceil(a*100.00/b)-sum;
        //x = D[i]*100/k-sum;
        x = max(0LL,x);
        mx  = max(mx,x);      // cout <<mx<<" "<<x<<" "<<i<<" "<<sum<<endl;
        sum += D[i];
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

