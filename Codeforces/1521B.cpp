#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define limit 1000008
using namespace std;
ll Mod=1000000007;

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n ;
    ll d[n+5];
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
    }
    ll mn = 0;
    d[0] = Mod;

    for(i=1; i<=n; i++)
    {
        if(d[mn] > d[i])
            mn = i;
    }
    cout << n-1 <<endl;
    for(i=mn-1,j=1; i>0; i--,j++)
    {
        cout <<i<<" "<<mn<<" "<<d[mn]+(j&1)<<" "<<d[mn]<<endl;
    }
    for(i=mn+1,j=1; i<=n; i++,j++)
    {
        cout <<i<<" "<<mn<<" "<<d[mn]+(j&1)<<" "<<d[mn]<<endl;
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
