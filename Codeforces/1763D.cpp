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
ll n,i,j,x,y;
bool vis[105];

ll rec(ll pos,ll mx)
{          //cout << pos <<" "<<mx<<endl;
    if(pos==j)
    {
        return 1;
    }
    if(pos==i)
        return rec(pos+1, max(mx, x));

    ll ans = 0;
    ll sz = x;
    if( pos > i)  sz = n+1;
    for(ll l=mx; l<sz; l++)
    {
        if(vis[l])   continue;
        vis[l] = 1;
        ans = (ans + rec(pos+1, l+1) )%Mod;      //cout << pos<<" "<<l<<" "<<mx<<" "<<ans<<endl;
        vis[l] = 0;
    }      //cout <<pos<<" "<<mx<<" "<<ans<<endl;
    return ans;
}

void Please_AC(ll tt)
{
    cin >> n >> i >> j >> x >> y;
    memset(vis, 0, sizeof(vis));
    vis[x] = vis[y] = 1;

    cout << rec(1, 1) <<endl;
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

