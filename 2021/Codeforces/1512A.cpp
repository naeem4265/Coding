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
    ll A[n+5];
    for(i=1; i<=n; i++) cin >> A[i];
    ll ind=0;
    for(i=2; i<n; i++)
    {
        if(A[i-1]==A[i+1] && A[i]!=A[i-1])
        {
            cout <<i<<endl;
            return ;
        }
        if(A[i]==A[i+1] && A[i-1]!=A[i])
        {
            cout <<i-1<<endl;
            return ;
        }
        if(A[i]!=A[i+1] && A[i-1]==A[i])
        {
            cout <<i+1<<endl;
            return ;
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
