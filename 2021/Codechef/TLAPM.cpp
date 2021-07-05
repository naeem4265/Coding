#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1008
using namespace std;
ll d[limit][limit];

void Set()
{
    ll i,j,k;
    d[1][1] = 1;
    for(i=2,j=2; i<limit; i++,j++)
        d[i][1] = d[i-1][1]+j;
    for(i=1; i<limit; i++)
    {
        for(j=2,k=i; j<limit; j++,k++)
        {
            d[i][j] = d[i][j-1]+k;
        }
    }
//    for(i=1; i<10; i++){
//        for(j=1; j<10; j++){
//            cout <<d[i][j]<<' ';}
//    cout <<endl;
//    }
}
void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    ll ans=0,x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    for(i=x1,j=y1; i<=x2; i++)
    {
        ans += d[i][j];  //cout <<i<<" "<<j<<" "<<d[i][j]<<endl;
    }
    for(i=x2,j=y1+1; j<=y2; j++)
    {
        ans += d[i][j];    //cout <<i<<" "<<j<<" "<<d[i][j]<<endl;
    }
    cout << ans <<endl;
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    Set();
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
