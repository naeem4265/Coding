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

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll x[n+5],y[n+5];
    for(i=0; i<n; i++)
    {
        cin >> x[i];
        cin >> y[i];
    }
    ll xl,xr,yu,yd;
    ll l=0,h=1e9,m1,m2;

    ll ct1,ct2;
    while(l<=h)
    {
        m1 = l+(h-l)/3;
        m2 = h-(h-l)/3;
        ct1=ct2=0;
        for(i=0; i<n; i++)
        {
            ct1 += abs(m1-x[i]);
        }
        for(i=0; i<n; i++)
        {
            ct2 += abs(m2-x[i]);
        }      //cout <<l<<" "<<h<<" "<<m1<<" "<<m2<<" "<<ct1<<" "<<ct2<<endl;
        if( ct1 <= ct2 )
            h = m2-1;
        else
            l = m1+1;
    }
    xl = m1;
    l=0,h=1e9;
    while(l<=h)
    {
        m1 = l+(h-l)/3;
        m2 = h-(h-l)/3;
        ct1=ct2=0;
        for(i=0; i<n; i++)
        {
            ct1 += abs(m1-x[i]);
        }
        for(i=0; i<n; i++)
        {
            ct2 += abs(m2-x[i]);
        }
        if( ct1 < ct2 )
            h = m2-1;
        else
            l = m1+1;
    }
    xr = m2;
    l=0,h=1e9;
    while(l<=h)
    {
        m1 = l+(h-l)/3;
        m2 = h-(h-l)/3;
        ct1=ct2=0;
        for(i=0; i<n; i++)
        {
            ct1 += abs(m1-y[i]);
        }
        for(i=0; i<n; i++)
        {
            ct2 += abs(m2-y[i]);
        }
        if( ct1 <= ct2 )
            h = m2-1;
        else
            l = m1+1;
    }
    yd = m1;
    l=0,h=1e9;
    while(l<=h)
    {
        m1 = l+(h-l)/3;
        m2 = h-(h-l)/3;
        ct1=ct2=0;
        for(i=0; i<n; i++)
        {
            ct1 += abs(m1-y[i]);
        }
        for(i=0; i<n; i++)
        {
            ct2 += abs(m2-y[i]);
        }
        if( ct1 < ct2 )
            h = m2-1;
        else
            l = m1+1;
    }
    yu = m2;
                    //cout << xl<<" "<<xr<<" "<<yd<<" "<<yu<<endl;
    cout << (xr-xl+1)*(yu-yd+1) <<endl;


    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
