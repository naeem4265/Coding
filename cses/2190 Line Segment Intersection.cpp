#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;


void Please_AC(ll tt)
{
    ll x1,x2,x3,x4,y1,y2,y3,y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    ll t1 = (x3-x1)*(y1-y2)-(x1-x2)*(y3-y1);
    ll t2 = (x4-x1)*(y1-y2)-(x1-x2)*(y4-y1);
    ll t3 = (x1-x3)*(y3-y4)-(x3-x4)*(y1-y3);
    ll t4 = (x2-x3)*(y3-y4)-(x3-x4)*(y2-y3);
    if(t1==0 || t2==0 || t3==0 || t4==0)
    {
        cout <<"YES\n";
    }
    else if((t1<0 && t2<0) || (t1>0 && t2>0) || (t3<0 && t4<0) || (t3>0 && t4>0))
    {
        cout <<"NO\n";
    }
    else
        cout <<"YES\n";


    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

