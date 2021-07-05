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

ll bigmod(ll b,ll p)
{
    ll ans=1;
    while(p)
    {
        if(p&1)
            ans = (ans*b)%Mod;
        b = (b*b)%Mod;
        p = p/2;
    }
    return ans;
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n;
    ll d[n+5],e[n+5];
    for(i=0; i<n; i++)
        cin >> d[i];
    for(i=0; i<n; i++)
        cin >> e[i];
    map< pair<ll,ll> , ll> mymap;
    mymap.clear();
    ll ct = 1;
    for(i=0; i<n; i++)
    {
        if(d[i]>e[i])
            swap(d[i],e[i]);
        if(mymap[mp(d[i],e[i])]) ct++;
        mymap[mp(d[i],e[i])]=1;
    }
    ct = min(ct,n/2);         //cout << ct << endl;
    cout << bigmod(2LL,ct) << endl;
    return ;
}

int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
