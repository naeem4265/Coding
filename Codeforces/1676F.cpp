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
map<ll,ll> mp;

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n >> k;
    ll d[n+5];
    mp.clear();
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        mp[d[i]]++;
    }
    sort(d, d+n);
    ll l=0,r=-1;
    d[n] = -1;
    for(i=0,j=0; i<=n; i++)
    {
        if(i && d[i]-d[i-1]>1)
        {
            if(i>j && (r-l)<(d[i-1]-d[j]))
            {
                r = d[i-1];
                l = d[j];
            }
            j = i;
        }
        if(mp[d[i]]<k)
        {        //cout <<i<<" "<<j<<" "<<endl;
            if(i>j && (r-l)<(d[i-1]-d[j]))
            {
                r = d[i-1];
                l = d[j];
            }
            j = i+1;
        }
    }
    if(r==-1)   cout <<r<<endl;
    else   cout <<l<<" "<<r<<endl;
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
