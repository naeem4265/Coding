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
    ll i,j,n;
    ll n1,n2,n3;

    cin >> n1 >> n2 >> n3 ;
    ll d1=Mod,d2=Mod,d3=Mod,a;
    ll sum = 0,one=0;

    for(i=0; i<n1; i++)
    {
        cin >> a;
        sum += a;
        one += a;
        if(a<d1) d1=a;
    }
    ll mn = one;
    one = 0;
    for(i=0; i<n2; i++)
    {
        cin >> a;
        sum += a;
        one += a;
        if(a<d2) d2=a;
    }
    mn = min(mn,one);
    one = 0;
    for(i=0; i<n3; i++)
    {
        cin >> a;
        sum += a;
        one += a;
        if(a<d3) d3=a;
    }
    mn = min(mn,one);

    mn = min(mn,d1+d2+d3-max(d1,max(d2,d3)));

    cout <<sum-2*mn<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
   // cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

