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

void solve(ll t)
{
    ll i,j,n,m,k;
    ll a,b,c;
    cin >> n >> k;

    ll d[n+5];

    ll andd[3],orr[3];
    cout <<"and 1 2\n";
    cin >> andd[0];
    cout <<"and 2 3\n";
    cin >> andd[1];
    cout <<"and 1 3\n";
    cin >> andd[2];
    cout <<"or 1 2\n";
    cin >> orr[0];
    cout <<"or 2 3\n";
    cin >> orr[1];
    cout <<"or 1 3\n";
    cin >> orr[2];

    /// it is proved that a+b = a&b + a|b;
    d[0] = ((andd[0]+orr[0])-(andd[1]+orr[1])+(andd[2]+orr[2]))/2;
    d[1] = (andd[0]+orr[0])-d[0];
    d[2] = (andd[1]+orr[1])-d[1];
    for(i=3; i<n; i++)
    {
        cout <<"and "<<i<<" "<<i+1<<endl;
        cin >> andd[0];
        cout <<"or "<<i<<" "<<i+1<<endl;
        cin >> orr[0];
        d[i] = (andd[0]+orr[0]) - d[i-1];
    }
    sort(d,d+n);

    cout <<"finish ";
    cout << d[k-1] <<endl;
    fflush(stdout);
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
