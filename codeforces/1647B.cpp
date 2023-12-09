#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;
string s[105];

void solve(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n >> m;

    for(i=0; i<n; i++)
    {
        cin >> s[i];
    }

    for(i=1; i<n; i++)
    {
        for(j=1; j<m; j++)
        {
            ll sum = s[i-1][j-1]-'0' + s[i-1][j]-'0' + s[i][j]-'0' + s[i][j-1]-'0';
            //cout <<i<<" "<<j<<" "<<sum<<endl;
            if(sum==3)
            {
                cout <<"NO\n";
                return ;
            }
        }
    }

    cout <<"YES\n";


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
