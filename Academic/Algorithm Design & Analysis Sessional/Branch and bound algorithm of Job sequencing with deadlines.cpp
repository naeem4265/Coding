#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;
ll upper,cost,n;
ll panalty[limit],dead[limit],tme[limit];

void rec(ll pos,ll u,ll c,ll mxdead,ll t)
{
    if(pos>=n) return ;
    if(upper >=u)
    {
        upper = u;
        cost = c;
    }
    ll mx = max(mxdead, dead[pos]);
    if(mx>=(t+tme[pos]))
        rec(pos+1,u-panalty[pos],c,mx,t+tme[pos]);
    if((c+panalty[pos])<upper)
        rec(pos+1,u,c+panalty[pos],mxdead,t);
}

void solve(ll t)
{
    ll i,j,mx=0;
    cout <<"\nEnter number of job:\n";
    cin >> n;
    upper = inf;
    cost = inf;
    cout <<"Enter "<<n<<" number of penalty[]:\n";
    for(i=0; i<n; i++){ cin >> panalty[i]; mx+= panalty[i]; }
    cout <<"Enter "<<n<<" number of deadline[]:\n";
    for(i=0; i<n; i++) cin >> dead[i];
    cout <<"Enter "<<n<<" number of time[]:\n";
    for(i=0; i<n; i++) cin >> tme[i];
    rec(0,mx,0,0,0);
    cout <<"\nSo the minimum cost is: "<<cost<<endl;
    cout <<"and the minimum penalty is: "<<upper<<endl<<endl;
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

/*
4
5 10 6 3
1 3 2 1
1 2 1 1
*/
