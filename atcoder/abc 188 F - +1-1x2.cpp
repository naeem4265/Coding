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
ll x;
map<ll,ll>mymap;

ll rec(ll y)
{
    if(mymap[y])  return mymap[y];
    if(y<=x) return mymap[y] = x-y;

    if(y&1)
    {
        return mymap[y] = min(abs(y-x),2+min(rec((y+1)/2),rec((y-1)/2)));
    }
    else return mymap[y] = min(1+rec(y/2),y-x);
}

void solve(ll tc)
{
    ll i,y,m;
    cin >> x >> y;

    cout <<rec(y)<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
   // cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

