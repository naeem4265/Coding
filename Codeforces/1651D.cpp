#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;
ll fx[] = {-1, 0, 1, 0};
ll fy[] = {0, -1, 0, 1};

map<pair<ll,ll> ,ll> mymap,ansx, ansy;
ll n;

void solve(ll tt)
{
    ll i,j;

    scanf("%d", &n);
    ll dx[n+5], dy[n+5];
    for(i=0; i<n; i++)
    {
        scanf("%d %d", &dx[i], &dy[i]);
        mymap[{dx[i], dy[i]}] = Mod;
    }
    queue<pair<ll,ll> > q;
    for(i=0; i<n; i++)
    {
        for(j=0; j<4; j++)
        {
            ll x = dx[i]+fx[j];
            ll y = dy[i]+fy[j];
            if(mymap[{x,y}]==0)
            {
                mymap[{dx[i],dy[i]}] = 1;
                ansx[{dx[i],dy[i]}] = x;
                ansy[{dx[i],dy[i]}] = y;
                q.push({dx[i], dy[i]});
                break;
            }
        }
    }

    while(!q.empty())
    {
        ll xx,yy;
        xx = q.front().first;
        yy = q.front().second;
        q.pop();
        for(j=0; j<4; j++)
        {
            ll x = xx+fx[j];
            ll y = yy+fy[j];
            if(mymap[{x,y}]==Mod)
            {
                mymap[{x,y}] = 1;
                ansx[{x,y}] = ansx[{xx,yy}];
                ansy[{x,y}] = ansy[{xx,yy}];;
                q.push({x,y});
            }
        }

    }

    for(i=0; i<n; i++)
    {
        printf("%d %d\n",ansx[{dx[i], dy[i]}],ansy[{dx[i], dy[i]}]);
    }
    return ;
}


int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
