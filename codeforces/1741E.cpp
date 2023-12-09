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
    string s;
    cin >> n;
    ll d[n+5];
    for(i=1; i<=n; i++)  cin >> d[i];
    bool ok[n+5];
    memset(ok, 0, sizeof(ok));
    ok[n+1] = 1;
    ll ct = 0;
    for(i=n; i>0; i--)
    {
        if(ok[i+1])
        {
            if(d[i]<i)
            {
                ok[i-d[i]] = 1;
            }
        }
        if(d[i]==ct)
        {
            ok[i] = 1;
            ct = -1;
        }
        ct++;
    }
    if(ok[1])   cout <<"Yes\n";
    else   cout <<"No\n";


    return ;
}


int  main()
{
  //  Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
