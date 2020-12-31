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
    ll i,j=10,n,m,d;
    cin >> n ;
    while(1)
    {
        m=n;
        while(m)
        {
            d=m%j;
            m/=j;
            if(d && (n%d)) break;
        }
        if(m==0)
        {
            cout <<n<<endl;
            return ;
        }
        n=n+1;
    }
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

