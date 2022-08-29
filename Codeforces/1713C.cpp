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
    memset(d, -1, sizeof(d));
    for(i=n-1; i>=0; i--)
    {
        if(d[i]!=-1)  continue;
        ll x = sqrt(i);
        if(x*x!=i)
            x++;
        //if(i>1)
        ll y = x*x-i;
        ll z = i;
        while(y<z)
        {
            d[y] = z;
            d[z] = y;
            y++;
            z--;
        }
        if(y==z)
            d[y] = y;
    }
    for(i=0; i<n; i++)
        cout << d[i]<<" ";
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
