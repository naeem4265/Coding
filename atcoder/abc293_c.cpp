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
ll h,w,d[12][12],cnt;
map<ll,ll> mp;

void rec(ll x,ll y)
{          //cout <<x<<" "<<y<<endl;
    if(x>h || x<1 || y<1 || y>w || mp[d[x][y]])   return;
    if(x==h && y==w)
    {
        cnt++;
        return;
    }
    mp[d[x][y]] = 1;
    rec(x+1, y);
    //rec(x-1, y);
    rec(x, y+1);
    //rec(x, y-1);
    mp[d[x][y]] = 0;
}

void Please_AC(ll tt)
{
    ll i,j;
    cin >> h >> w;
    for(i=1; i<=h; i++)
    {
        for(j=1; j<=w; j++)
        {
            cin >> d[i][j];
        }
    }
    rec(1,1);
    cout << cnt <<endl;
    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

