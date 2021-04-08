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

void solve(ll t)
{
    ll i,j,n,m,k;
    string s,d;
    cin >> s >> d;
    n = s.size();
    m = d.size();
    ll ans = 0;
    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            for(k=0; k<m; k++)
            {
                ll ct = 0;
                if(s[j]==d[k])
                {
                    ct = 2;
                    ll x = j+1,y = k+1;
                    while(x<n && y<m && s[x]==d[y])
                    {
                        x++;
                        y++;
                        ct += 2;
                    }
                }
                ans = max(ans,ct);
            }
        }
    }
    cout << n+m-ans <<endl;
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
