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

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll d[n+5],b[n+5];
    for(i=0; i<n; i++)   cin >> d[i];
    i = 0;
    if(n&1){
        b[0] = d[0];
        i = 1;
    }
    for(; i<n; i+=2)
    {
        if(d[i]>d[i+1])
        {
            b[i] = d[i+1];
            b[i+1] = d[i];
        }
        else
        {
            b[i] = d[i];
            b[i+1] = d[i+1];
        }
    }
    for(i=1; i<n; i++)
    {           //cout <<i<<" "<<b[i]<<" "<<b[i-1]<<endl;
        if(b[i]<b[i-1])
        {
            cout <<"NO\n";
            return ;
        }
    }
    cout <<"YES\n";
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
