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
    ll i,j,n,m=0,a,k,ct=1,ans=0;
    cin >> n >> k;
    for(i=0; i<n; i++)
    {
        cin >> a;
        m += a;
        m -= k;
        if(m<0 && !ans)
        {
            ans = ct;
        }
        ct++;
    }
    if(!ans)
    {
        ans = n+1+m/k;
    }
    cout <<ans<<endl;
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

