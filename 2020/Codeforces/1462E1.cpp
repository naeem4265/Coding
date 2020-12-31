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
    ll D[n+5];
    for(i=0; i<n; i++)  cin >> D[i];
    ll ans=0,l=0,r=0,d;
    sort(D,D+n);
    for(i=0; i<n; i++)  cout <<D[i]<<" "; cout <<endl;
    for(l=0,r=2; r<n; )
    {
        r = max(r,l+2);
        if((D[r]-D[l])<=2)
        {
            d = r-l-1;
            if(d) ans+=d;
            if(r<n-1) r++;
            else   l++;
        }
        else l++;
    }
    cout <<ans<<endl;
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

