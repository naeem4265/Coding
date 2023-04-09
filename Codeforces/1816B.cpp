#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 2e5+5;
const ll Mod = 1e9+7;
using namespace std;
ll d[3][limit];

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;

    d[1][1] = 2LL*n;
    d[2][n] = 2LL*n-1;

    for(i=2,j=2LL*n-2,k = 1; i<=n; i++)
    {
        if(i&1)
        {
            d[1][i] = j--;
            d[2][i-1] = j--;
        }
        else
        {
            d[2][i-1] = k++;
            d[1][i] = k++;
        }
    }
    for(i=1; i<=n; i++)   cout <<d[1][i]<<" "; cout <<endl;
    for(i=1; i<=n; i++)   cout <<d[2][i]<<" "; cout <<endl;

    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

