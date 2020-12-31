#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll tc)
{
    ll i,j,n,m,k;
    cin >> n ;
    ll D[n+5],sum=0;
    for(i=1; i<=n; i++)
    {
        cin >> D[i];
        sum += D[i];
    }
    ll mn = 1e18;
    for(j=1; j*j<=sum; j++)
    {
        if(sum%j)  continue;
        m = j;
        ll temp=0,ct=0;
        for(i=1; i<=n; i++)
        {
            if((D[i]+temp)>m) break;
            if((D[i]+temp)==m)
            {
                temp = 0;
            }
            else
            {
                ct++;
                temp += D[i];
            }
        }
        if(i>n)
            mn = min(mn,ct);    //cout <<i<<" "<<m<<" "<<j<<" "<<ct<<" "<<mn<<endl;
        m = sum/j;
        temp=0,ct=0;
        for(i=1; i<=n; i++)
        {
            if((D[i]+temp)>m) break;
            if((D[i]+temp)==m)
            {
                temp = 0;
            }
            else
            {
                ct++;
                temp += D[i];
            }
        }
        if(i>n)
            mn = min(mn,ct);
    }
    cout <<mn<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
    cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

