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
    ll r,c;
    cin >> n >> m >> r >> c;
    string s[n+5];
    r--;
    c--;
    for(i=0; i<n; i++)
        cin >> s[i];
    if(s[r][c]=='B')
    {
        cout <<0<<endl;
        return ;
    }
    for(i=n-1; i>=0; i--)
        if(s[i][c]=='B')
        {
            cout <<1<<endl;
            return ;
        }
    for(i=m-1; i>=0; i--)
        if(s[r][i]=='B')
        {
            cout <<1<<endl;
            return ;
        }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(s[i][j]=='B')
            {
                cout <<2<<endl;
                return ;
            }
        }
    }
    cout <<-1<<endl;
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
