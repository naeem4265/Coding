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
    ll x1,x2,v1,v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if(x1>x2)
    {
        swap(x1,x2);
        swap(v1,v2);
    }
    if((x1!=x2 && v1==v2)||(x1==x2 && v1!=v2) || (x1<x2 && v1<=v2))
    {
        cout <<"NO\n";
        return ;
    }
    ll temp = (x2-x1)/(v1-v2);

    if(temp*(v1-v2)!=(x2-x1))
    {
        cout <<"NO\n";
        return ;
    }
    cout <<"YES\n";

    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}


