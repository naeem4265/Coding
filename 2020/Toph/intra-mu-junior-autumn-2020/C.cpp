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
    int i,j,n,m,k;
    cin >> n ;
    ll D[n+5];
    D[0]=0;
    for(i=1; i<=n; i++)
    {
        cin >> m;
        D[i] = m+D[i-1];
    }
    cin >> m;
    int q;
    cin >> q;
    for(i=0; i<q; i++)
    {
        ll l,r;
        cin >> l >> r;
        l--;
        if(((D[r]-D[l])/(r-l))>=m)
            cout <<"Hurray! we made it in time!!\n";
        else
            cout <<"Oh! we missed it!!\n";
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}


