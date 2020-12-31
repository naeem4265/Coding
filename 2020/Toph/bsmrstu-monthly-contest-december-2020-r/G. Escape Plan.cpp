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
    ll l,r,L[n+5],R[n+5];
    for(i=0; i<n; i++)
    {
        cin >> l >> r;
        L[i] = l-i;
        R[i] = r-i;
    }
    l = -1e18;
    r = 1e18;
    for(i=0; i<n; i++)
    {
        if(L[i]>l) l = L[i];
        if(R[i]<r) r = R[i];
    }
    if(l<=r)
        cout <<l<<endl;
    else
        cout <<"I'm Stuck :(\n";
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

