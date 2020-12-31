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
    cin >> n >> m;
    ll D[n+5];
    for(i=0; i<n; i++)  cin >> D[i];
    sort(D,D+n);
    ll l=1,h=1e18,mid,g=1,r=0,t;
    while(l<=h)
    {
        mid = (l+h)/2;
        t = D[0]%mid;
        for(i=1; i<n; i++)
        {
            if((D[i]%mid)!=t) break;
        }
        cout <<i<<" "<<l<<" "<<h<<" "<<mid<<" "<<g<<" "<<r<<endl;
        if(i==n)
        {
            l = mid+1;
            g = mid;
            r = t;
        }
        else
            h = mid-1;
    }
    cout <<g<<" "<<r<<endl;
    for(i=0; i<m; i++)
    {
        ll a;
        cin >> a;
        if(g%(a+r)) cout <<1<<" ";
        else cout <<a+r<<" ";
    }
    cout <<endl;
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

