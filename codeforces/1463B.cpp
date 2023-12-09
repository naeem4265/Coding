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


ll n,d[55];
void check(ll p)
{
    ll A[n+5],sum=0,s=0,i,x;
    for(i=0; i<n; i++)
    {
        if(i&1)
            A[i] = 1;
        else
            A[i] = d[i];
        s += abs(d[i]-A[i]);
        sum += d[i];
    }
    if(2*s<=sum)
    {
        for(i=0; i<n; i++)
            cout <<A[i]<<" ";
        cout <<endl;
        return ;
    }
    sum=0,s=0;
    for(i=0; i<n; i++)
    {
        if(i&1)
            A[i] = d[i];
        else
            A[i] = 1;
        s += abs(d[i]-A[i]);
        sum += d[i];
    }
    if(2*s<=sum)
    {
        for(i=0; i<n; i++)
            cout <<A[i]<<" ";
        cout <<endl;
        return ;
    }
    return ;
}
void solve(ll tc)
{
    ll i,j,m,k;
    cin >> n ;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
    }
    check(0);
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

