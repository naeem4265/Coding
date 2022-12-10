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
    ll sum=0;
    ll d[n+5], odd=Mod,even=Mod, mn = Mod;
    bool ok = 0;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        if(d[i]&1)  odd = min(odd, d[i]);
        else        even = min(even, d[i]);
        if(i)  mn = min(mn, d[i]);
    }
    sum--;
    if(sum&1)  ok = 1;
    if(d[0]==1)  ok = 0;

    if(mn<d[0])   cout <<"Alice\n";
    else    cout <<"Bob\n";

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
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

