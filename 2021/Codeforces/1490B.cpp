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
    int i,j,n,m,k;
    cin >> m ;
    ll a,o=0,z=0,two=0;
    for(i=0; i<m; i++)
    {
        cin >> a;
        if(a%3==0) z++;
        else if(a%3==1) o++;
        else two++;
    }
    n = m/3;
    ll ans=0;
    if(z>n)
    {
        o += (z-n);
        ans += (z-n);
        z = n;
    }
    if(o>n)
    {
         two += (o-n);
         ans += (o-n);
         o = n;
    }
    if(two>n)
    {
        z += (two-n);
        ans += (two-n);
        two = n;
    }
    if(z>n)
    {
        o += (z-n);
        ans += (z-n);
        z = n;
    }
    if(o>n)
    {
         two += (o-n);
         ans += (o-n);
         o = n;
    }
    if(two>n)
    {
        z += (two-n);
        ans += two;
        two = n;
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
