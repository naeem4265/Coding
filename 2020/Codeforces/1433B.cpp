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

void solve(int t)
{
    int i,j,n,m,k,l=0;
    cin >> n ;
    bool D[n+5];
    for(i=0; i<n; i++)
    {
        cin >> D[i];
    }
    for(i=0; i<n; i++)
    {
        if(D[i])
        {
            l = i;
            break;
        }
    }
    ll ans = 0;
    for(i=l+1; i<n; i++)
    {
        if(D[i])
        {
            ans += (i-l-1);
            l = i;
        }
    }
    cout <<ans <<endl;
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

