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
    ll i,j,n,m,k,d,a,ans=0,x=0,y=0;
    cin >> n >> d;
    for(i=0; i<n; i++)
    {
        cin >> a;
        if(a<=9 || a>=80) x++;
        else y++;
    }
    a = (x/d);
    ans = a;
    if(x%d) ans++;
    a = (y/d);
    ans += a;
    if(y%d) ans++;
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

