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
    cin >> n ;
    ll d[n+5];
    for(i=0; i<n; i++)
        cin >> d[i];
    if(n==1)
    {
        cout <<"Case "<<t<<": "<< d[0]*d[0] <<endl;
        return;
    }
    sort(d,d+n);
    cout <<"Case "<<t<<": "<< d[0]*d[n-1] <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout

//    #ifndef ONLINE_JUDGE
//       freopen("in.txt", "r", stdin);
//    //   freopen("out.txt", "w", stdout);
//    #endif // ONLINE_JUDGE

    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
