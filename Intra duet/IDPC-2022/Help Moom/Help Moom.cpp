#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("case0.txt","r",stdin);
#define Fout freopen ("ans.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll tt)
{
    ll i,j,n,m,b;
    //string s;
    cin >> n >> m >> b;
    string x,y,z;
    cin >> x >> y;
    if(n<m)
    {
        swap(n,m);
        swap(x,y);
    }
    z = x;
    ll temp = 0,d1,d2;
    for(i=n-1,j=m-1; i>=0; i--,j--)
    {
        d1 = x[i]-'0';
        if(j>=0)
            d2 = y[j]-'0';
        else
            d2 = 0;
        z[i] = '0' + (d1+d2+temp)%b; //cout <<d1<<" "<<d2<<" "<<temp<<" "<<z[i]<<endl;
        if((d1+d2+temp)>=b)
            temp = 1;
        else
            temp = 0;
    }
    if(temp)
    {
        z = '1'+z;
    }
    cout << z <<endl;

    return ;
}
int  main()
{
//    Fast
    //Freed
    //Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
