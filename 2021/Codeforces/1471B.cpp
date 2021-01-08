#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll tc)
{
    ll i,j,n,m,k,x;
    cin >> n >> x;
    ll sum=0,a[n+5],mn=Mod,ind=n;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        m = a[i];
        ll ct=1;
        while(m%x==0)
        {
            ct++;
            m/=x;
        }
        if(mn>ct)
        {
            mn=ct;
            ind=i;
        }
    }
    for(i=0; i<n; i++)
    {
        if(i<ind) sum += a[i];
        sum += (mn*a[i]);
    }
    cout <<sum<<endl;
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

