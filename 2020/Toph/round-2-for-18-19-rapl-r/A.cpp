#include<bits/stdc++.h>            ///wrong answer
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

void solve(int t)
{
    ll i,j,n,m,k,r,l;
    cin >> n ;
    ll D[n+5];
    D[0]=D[n+1]=0;
    for(i=1; i<=n; i++)
    {
        cin >> D[i];
    }
    ll ans=0;
    for(r=n; r>0; r--)
    {
        if(D[r]<D[r+1])
            break;
        ans += D[r]-D[r+1];     //cout <<r<<" "<<ans<<endl;
    }
    for(l=1; l<=n && l<=r; l++)
    {
        if(D[l]<D[l-1])
            break;
        ans += D[l]-D[l-1];     // cout <<l<<" "<<ans<<endl;
    }
    ll mx=0;
    for(i=l-1; i<=r+1; i++)
    {
        if(D[i-1]<=D[i])
        {
            ans += D[i]-D[l-1];
            mx = 0;
        }
        else
        {
            ll temp = D[i];
            D[i] = min(D[i-1],D[i]+mx);
            ans += max(0LL,D[i-1]-D[i]);
            D[i] = D[i-1];
            mx = D[i]-temp;
        }               //cout <<i<<" "<<ans<<endl;
    }
    cout <<ans<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

