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
ll f[limit];

ll fibo()
{         // cout <<n<<endl;
    f[1]=1;
    f[2]=1;
    for(ll i=3; i<limit; i++)
        f[i] = (f[i-1]+f[i-2])%Mod;
}

void solve(ll tc)
{
    ll i,j,n,m,k;
    cin >> n ;

    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
    fibo();
    cout <<f[100000]<<endl;
    cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

