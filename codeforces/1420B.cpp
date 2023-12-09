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
    ll i,j,n,m;
    cin >> n;
    ll D[n+5];
    for(i=0; i<n; i++)
    {
        cin >> D[i];
        vis[i] =0;
    }
    sort(D,D+n);
    reverse(D,D+n);
    ll ans=0,temp;
    for(i=31; i>=0; i--)
    {
        temp = 1<<i;
        ll ct=0;
        for(j=0; j<n; j++)
        {
            if((D[j] & temp) && vis[j]==0)
            {
                vis[j]=1;
                ct++;
            }
        }
        ans += ct*(ct-1)/2;
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
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

