#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(int t)
{
    ll i,j,n,m,k;
    cin >> n ;
    if(n%2==0)
    {
        cout <<"NO\n";
        return ;
    }
    cout <<"YES\n";
    if(n==1)
    {
        return ;
    }
    if(n==3)
    {
        cout <<"1 2\n1 3\n";
        return;
    }
    if(n&1)
    {
        for(i=2; i<=n; i++)
        {
            cout <<i-1<<" "<<i<<endl;
        }
        return ;
    }
    for(i=2; i<n; i++)
    {
        cout <<i-1<<" "<<i<<endl;
    }
    cout <<n/2<<" "<<n<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
