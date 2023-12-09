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
    ll i,j,n,m,k,temp;
    ll x,y;
    cin >> x >> y;
    ll c1,c2,c3,c4,c5,c6;
    cin >> c1 >> c2 >> c3 >> c4 >> c5 >> c6;
    c1 = min(c1,c6+c2);
    c2 = min(c2,c1+c3);
    c3 = min(c3,c2+c4);
    c4 = min(c4,c3+c5);
    c5 = min(c5,c4+c6);
    c6 = min(c6,c5+c1);
    ll ans=0;
    if(x>=0 && y>=0)
    {
        temp = min(x,y);
        x -= temp;
        y -= temp;
        ans += temp*c1;
    }
    if(x<0 && y<0)
    {
        temp = max(x,y);
        x -= temp;
        y -= temp;
        ans += (-1*temp)*c4;
    }
    if(x>=0)
        ans += (x*c6);
    if(x<0)
        ans += (-1*x)*c3;
    if(y>=0)
        ans += y*c2;
    if(y<0)
        ans += (-1*y)*c5;
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

