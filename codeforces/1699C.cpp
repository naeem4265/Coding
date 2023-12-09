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

///kiccu bujhinai. editorial copy korci
void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    ll p[n+5],l=Mod, r=-1;
    for(i=0; i<n; i++)
    {
        cin >> m;
        p[m] = i;
        if(m<2)
        {
            l = min(l,i);
            r = max(r,i);
        }
    }
    ll ans = 1;
    for(i=2; i<n; i++)
    {
        if(p[i]<l)  l = p[i];
        else if(p[i]>r)  r = p[i];
        else
        {
            ans = (ans*(r-l+1-i))%Mod;
        }
    }
    cout << ans <<endl;
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
        Please_AC(t);
    return 0;
}
