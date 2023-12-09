#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> m >> n;
    ll d[m+5][n+5];

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cin >> d[i][j];
        }
    }
    ll ans = 0,l=0,h=Mod,mid;
    while(l<=h)
    {
        mid = (l+h)/2;
        for(j=0; j<n; j++)
        {
            for(i=0; i<m; i++)
            {
                if(mid<=d[i][j])
                    break;
            }
            if(i==m)
                break;
        }
        if(j<n)
        {
            h = mid-1;
            continue;
        }
        for(i=0; i<m; i++)
        {
            ll ct=0;
            for(j=0; j<n; j++)
            {
                if(mid<=d[i][j])   ct++;
            }
            if(ct>=2)   break;
        }
        if(i<m)
        {
            ans = mid;
            l = mid+1;
        }
        else
            h = mid-1;
    }
    cout << ans <<endl;
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
