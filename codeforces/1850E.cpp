#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,c;
    string s;
    cin >> n >> c;
    ll d[n+5];
    for(i=0; i<n; i++)   cin >> d[i];
    sort(d, d+n);
    ll lo=0, hi = 1e9-d[n-1];
    while(lo<=hi)
    {
        m = (lo+hi)/2LL;
        ll sum = 0;
        for(i=0; i<n; i++)
        {
            sum += (d[i]+m+m)*(d[i]+m+m);
            if(sum>c)  break;
        }
        if(sum==c)
        {
            cout <<m<<endl;
            return;
        }
        if(sum>c)  hi = m-1;
        else   lo = m+1;
    }




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
