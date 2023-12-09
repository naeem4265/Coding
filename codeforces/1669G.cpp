#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n >> m;
    string s[n+4];
    for(i=0; i<n; i++)
        cin >> s[i];
    for(j=0; j<m; j++)
    {
        for(i=n-1,k=n-1; i>=0; i--)
        {
            if(s[i][j]=='o')
                k = i-1;
            else if(s[i][j]=='*')
            {         //cout <<i<<" "<<j<<" "<<k<<endl;
                s[i][j] = '.';
                s[k][j] = '*';
                k--;
            }
        }
    }
    for(i=0; i<n; i++)
        cout <<s[i]<<endl;

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

