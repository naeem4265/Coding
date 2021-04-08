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

void solve(int t)
{
    int i,j,n,m,k,q;
    cin >> n >> q >> k;
    ll D[n+5];
    for(i=1; i<=n; i++)
    {
        cin >> D[i];
    }
    D[0]=0;
    D[n+1] = D[n]+1;
    ll mx[n+5];
    mx[0]=0;
    for(i=1; i<=n; i++)
    {
        mx[i] = mx[i-1]+D[i+1]-D[i-1]-2;  //cout <<i<<"cc "<<mx[i]<<endl;
    }
    for(i=0; i<q; i++)
    {
        ll l,r;
        cin >> l >> r;
        if(l==r)
        {
            cout <<k-1<<endl;
            continue;
        }
        cout <<mx[r-1]-mx[l]+k-D[r-1]-1+D[l+1]-2<<endl;
    }
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
