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
    cin >> n >> m;
    ll d[n+5];

    for(i=1; i<=n; i++)   cin >> d[i];

    ll sum =0,ct=0;
    for(i=m; i>1; i--)
    {
        if((sum+d[i])>0)
        {
            d[i] = -d[i];
            ct++;
        }
        sum += d[i];
    }

    sum = 0;
    for(i=m+1; i<=n; i++)
    {
        if((sum+d[i])<0)
        {
            sum -= d[i];
            ct++;
        }
        else
            sum += d[i];
    }

    cout << ct <<endl;
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

