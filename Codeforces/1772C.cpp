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


void Best_of_LUCK_MESSI(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> k >> n;
    ll d[n+5];
    d[1] = 1;
    for(i=2; i<=k; i++)
    {
        m = n-(d[i-1]+i-1);
        if(m>=(k-i))
            d[i] = d[i-1]+i-1;
        else
            d[i] = d[i-1]+1;
    }
    for(i=1; i<=k; i++)   cout << d[i] <<" "; cout <<endl;
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
        Best_of_LUCK_MESSI(t);

    return 0;
}

