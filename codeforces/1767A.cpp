#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    ll x1,x2,x3,y1,y2,y3;
    cin >> x1 >>y1 >> x2 >> y2 >> x3 >> y3;
    if((x1==x2 || x1==x3 || x2==x3) && (y1==y2 || y1==y3 || y2==y3))
    {
        cout <<"NO\n";
    }
    else
        cout << "YES\n";

    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

