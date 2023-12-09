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
    cin >> n >> m >> k;
    bool mp[k+5];
    memset(mp, 0, sizeof(mp));

    ll d[k+5];
    for(i=0; i<k; i++)  cin >> d[i];
    ll ct =0;
    q = k;
    for(i=0; i<q; i++)
    {
        mp[d[i]] = 1;
        ct++;
        while(mp[k])
        {
            k--;
            ct--;
        }
        if(ct>(n*m-4))
        {
            cout <<"TIDAK\n";
            return ;
        }
    }
    cout <<"YA\n";
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
    {
        //cout <<"Case "<<t<<": ";
        Please_AC(t);
    }
    return 0;
}
