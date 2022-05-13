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
    ll i,j,n,m,k,ct=0;
    cin >> n ;
    for(i=1; i<=n; i++)
    {
        ll a=i,b=i;
        while(a || b)
        {
            m = a%10;
            if(m==7) break;
            a /=10;
            m = b%8;
            if(m==7) break;
            b /= 8;
        }
        if(a || b) continue;
        ct++;
    }
    cout <<ct<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
   // cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

