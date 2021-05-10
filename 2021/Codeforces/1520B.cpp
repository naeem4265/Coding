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
    ll ans = 0;
    for(i=1,k=1; i<Mod*100LL; i = (i+k))
    {
        k = k*10;
        for(j=1; j<10; j++)
        {
            if(n >= (i*j))
            {
                ans++; //cout <<i*j<<" "<<ans <<endl;
            }
            else
            {
                cout << ans <<endl;
                return ;
            }
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
