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
ll n,m;

bool corner(ll x, ll y)
{
    if(x==1 && y==1)   return 1;
    if(x==n && y==1)   return 1;
    if(x==1 && y==m)   return 1;
    if(x==n && y==m)   return 1;
    return 0;
}

void Please_AC(ll tt)
{
    ll i,j,x1,y1,x2,y2;
    cin >> n >> m;
    cin >> x1 >> y1 >> x2 >> y2;
    if(corner(x1,y1) || corner(x2,y2))
    {
        cout <<2<<endl;
    }
    else if(x1==1 || x2==1 || x1==n || x2==n || y1==1 || y2==1 || y1==m|| y2==m)
        cout <<3<<endl;
    else cout <<4<<endl;

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

