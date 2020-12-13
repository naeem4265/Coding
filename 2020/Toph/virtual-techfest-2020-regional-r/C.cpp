#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 2000008
using namespace std;

ll D[limit],L[limit],R[limit];

void solve(int t)
{
    ll i,j,n,m,k;
    cin >> n ;
    for(i=1; i<=n; i++)
        cin >> D[i];
    L[0] = L[1] = 0;
    R[n+1] = R[n] = 0;
    for(i=2; i<=n; i++)
    {
        L[i] = min(D[i]-1,L[i-1]+1);
    }
    for(i=n-1; i>0; i--)
    {
        R[i] = min(D[i]-1,R[i+1]+1);
    }
    ll mx=0,ans=1e18;
    for(i=1; i<=n; i++)
    {
        mx = max(mx,min(L[i],R[i]));
    }             //cout <<mx<<" "<<ans<<endl;
    for(i=1; i<=n; i++)
    {
        ll mn = 1e18;
        if(mx==min(L[i],R[i]))
        {
            mn = D[i]-(mx+1);    //cout <<i<<" "<<mn<<endl;
            for(j=i-1,k=mx; k>0; k--,j--)
            {
                mn += (D[j]-k);
            }
            for(j=i+1,k=mx; k>0; k--,j++)
            {
                mn += (D[j]-k);
            }
        }
        ans = min(mn,ans);
    }
    cout <<2*mx+1<<" "<<ans<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

