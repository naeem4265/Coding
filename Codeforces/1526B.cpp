#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
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
    for(i=0; i<11; i++)
    {
        m = n-i*111;
        if(m>=0 && m%11==0)
        {
            cout <<"YES\n";
            return ;
        }
    }
    cout <<"NO\n";

    return ;
}
int  main()
{
 //   Fast
//    Freed
//    Fout
    ll t,tt=1,i;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

