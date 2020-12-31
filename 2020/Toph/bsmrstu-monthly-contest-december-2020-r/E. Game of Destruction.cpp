#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 508
using namespace std;
ll D[limit];
vector<ll> out;

ll rec(ll l,ll r)
{       cout <<l<<" "<<r<<endl;
    if(l>r) return 0;
    ll m=-1,x,ind=0,i;
    for(i=l; i<=r; i++)
    {
        x = D[i]*(r-l+1)+rec(l,i-1)+rec(i+1,r);
        if(m<x)
        {
            if(m!=-1) out.pop_back();
            m = x;
            out.pb(i);        cout <<l<<" "<<r<<" "<<i<<" "<<m<<endl;
        }
    }
    return m;
}

void solve(ll tc)
{
    ll i,j,n,m,k;
    cin >> n ;
    for(i=1; i<=n; i++)  cin >> D[i];
    cout <<rec(1,n)<<endl;
    for(i=out.size()-1; i>=0; i--)
        cout <<out[i]<<" ";
    cout <<endl;
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

