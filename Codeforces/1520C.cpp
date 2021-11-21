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
    if(n==2)
    {
        cout <<"-1\n";
        return ;
    }
    if(n==1)
    {
        cout <<"1\n";
        return ;
    }
    k = 2;
    k = 0;
    for(i = 2; i<=n*n; i += 2)
    {
        k++;
        cout << i <<" ";
        if(k%n==0) cout <<endl;
    }
    for(i = 1; i<=n*n; i += 2)
    {
        k++;
        cout << i <<" ";
        if(k%n==0) cout <<endl;
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
