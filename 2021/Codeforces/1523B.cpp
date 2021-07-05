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
    ll a[n+5];
    for(i=0; i<n; i++) cin >> a[i];
    m = n*3;
    cout << m << endl;
    for(i=1; i<=n; i+=2)
    {
        for(j=0; j<6; j++)
        {
            if(j&1) cout <<2<<" ";
            else  cout <<1<<" ";
            cout <<i<<" "<<i+1<<endl;
        }
    }
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
