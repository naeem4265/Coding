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
    ll i,j,n,m,k;
    cin >> n ;
    ll D[n+5];
    bool vis[n+5];
    for(i=0; i<n+5; i++)
    {
        vis[i] = 1;
    }

    for(i=0; i<n; i++)
        cin >> D[i];
    sort(D,D+n);
    reverse(D,D+n);
    ll ans = 0;
    for(i=31; i>=0; i--)
    {
        m = 1<<i;
        ll ct = 0;
        for(j=0; j<n; j++)
        {
            if(m&D[j] && vis[j])
            {
                ct++;
            }
        }
        if(ct>1)
        {
            for(j=0; j<n; j++)
            {
                if(m&D[j] && vis[j])
                {
                    vis[j] = 1;
                }
                else
                    vis[j] = 0;
            }
            ans += m;  // cout <<i<<" "<<m<<" "<<ans<<endl;
        }
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


