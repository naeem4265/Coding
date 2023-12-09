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
    ll i,j,n,m,k,q;
    cin >> n;
    ll d[n+5][n+5];
    ll sum=0, mn = 1e9+5;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin >> d[i][j];
            sum += d[i][j];
            if((i+j+1)==n)
                mn = min(mn, d[i][j]);
        }
    }
    sum -= mn;
    cout << sum <<endl;

    return ;
}


int  main()
{
    Fast
    ll t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

