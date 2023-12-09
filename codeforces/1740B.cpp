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


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    ll h[n+5],w[n+5];
    ll mx1= 0, ans = 0;
    for(i=0; i<n; i++)
    {
        cin >> h[i] >> w[i];
        if(h[i]<w[i])  swap(h[i], w[i]);
        ans += 2LL*w[i];

        mx1 = max(mx1, h[i]);
    }

    cout <<ans+mx1*2LL <<endl;



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
    {
        //cout <<"Case "<<t<<": ";
        Please_AC(t);
    }
    return 0;
}
