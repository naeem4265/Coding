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

void solve(int t)
{
    ll i,j,n,m,k,x;
    cin >> n ;
    m = n;
    vector<pair<ll,ll> >out;
    for(i=2; i*i<=n; i++)
    {
        ll ct=0;
        while(n%i==0)
        {
            ct++;
            n /= i;
        }
        if(ct)
        {
            out.pb(mp(ct,i));
        }
    }
    if(n>1) out.pb(mp(1,n));
    sort(out.begin(),out.end());
    ll sz=out.size();
    x = out[sz-1].first;
    if(x==1)
    {
        cout <<1<<endl<<m<<endl;
        return ;
    }
    cout <<x<<endl;
    for(i=1; i<x; i++)
    {
        cout <<out[sz-1].second<<" ";
        m /= out[sz-1].second;
    }
    cout <<m<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

