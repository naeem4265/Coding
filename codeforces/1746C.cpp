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
    ll d[n+5];
    for(i=1; i<=n; i++)   cin >> d[i];
    ll idx[n+5];
    memset(idx, 0, sizeof(idx));

    d[0] = -10;
    for(i=1; i<=n; i++)
    {
        if((d[i-1]-d[i])>0)
        {
            idx[d[i-1]] = i;
        }
    }
    for(i=1; i<=n; i++)
    {
        if(idx[i])  cout <<idx[i]<<" ";
        else cout <<"1 ";
    }
    cout <<endl;

    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
