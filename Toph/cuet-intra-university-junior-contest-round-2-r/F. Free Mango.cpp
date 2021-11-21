#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

ll divisor[limit],ct[limit][20];

void divi()
{
    ll i,j;
    for(i=1; i<limit; i++)
    {
        for(j=i; j<limit; j+=i)
        {
            divisor[j]++;
        }
    }
    for(i=1; i<limit; i++)
    {
        ll x=0,temp=divisor[i];
        while(temp)
        {
            ct[i][x] = ct[i-1][x];
            if( temp&1 )
                ct[i][x]++;
            temp /= 2;
            x++;
        }                            //cout <<i<<" "<<divisor[i]<<" "<<(divisor[i]^divisor[i-1])<<endl;
        divisor[i] = divisor[i] ^ divisor[i-1];
    }
}

void solve(ll t)
{
    ll i,j,n,m,k,l,r;
    cin >> l >> r;
    l--;
    ll p = 0;

    /* there are wrong case
    for(i=0; i<20; i++)
    {            //cout <<i<<" "<<ct[r][i] <<" "<<ct[l][i]<<endl;
        ll x = ct[r][i] - ct[l][i];
        if(x&1)
        {
            p = 1;
        }
    }           //cout <<divisor[r]<<" "<<divisor[l] <<endl;
    */
    p = divisor[r] ^ divisor[l];
    if(p)
    {
        cout <<"Alice\n";
        return;
    }
    cout <<"Bob\n";
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    divi();
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
