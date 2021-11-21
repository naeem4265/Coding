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
bool vis[limit];
void solve(int t)
{
    int i,j,n,m;
    cin >> n;
    for(i=0; i<n+5; i++)
    {
        vis[i]=0;
    }
    ll D[n+5];
    D[0]=0;
    for(i=0; i<n; i++)
    {
        cin >> D[i];
    }
    sort(D,D+n);
    reverse(D,D+n);
    ll x = D[0];
    cout <<D[0]<<' ';
    ll y=0,mx=0,ind=0;
    for(i=1; i<n; i++)
    {
        mx = 0;
        for(j=1; j<n; j++)
        {
            if(vis[j]) continue;
            y = __gcd(x,D[j]);
            if(mx<y)
            {
                mx = y;
                ind=j;
            }
        }
        cout <<D[ind]<<' ';
        vis[ind]=1;
        x = __gcd(x,D[ind]);
    }
    cout <<endl;
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

