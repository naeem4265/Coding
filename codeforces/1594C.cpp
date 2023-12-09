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
#define limit 300008
using namespace std;

vector<ll> ds[limit];
bool vis[limit];

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    char ch;
    cin >> n ;
    cin >> ch;
    cin >> s;

    ll ans = 2;
    for(i=0; i<n; i++)
    {
        if(s[i]!=ch) break;
    }
    if(i==n)
    {
        cout <<0<<endl;
        return ;
    }
    if(s[n-1]==ch)
    {
        cout <<1<<endl<<n<<endl;
        return ;
    }

    for(i=0; i<=n+2; i++)  vis[i] = 0;

    for(i=0; i<n; i++)
    {
        if(s[i]!=ch)
        {
            for(j=ds[i+1].size()-1; j>=0; j--)
            {
                vis[ds[i+1][j]] = 1;   //cout <<i<<" "<<ds[i+1][j]<<" dv \n";
            }
        }
    }

    for(i=1; i<=n;i++)
    {
        if(vis[i]==0)
        {
            cout <<1<<endl;
            cout <<i<<endl;
            return ;
        }
    }

    cout << 2 <<endl<<n-1<<" "<<n<<endl;

    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1,i,j;
    for(i=1; i<limit; i++)
    {
        for(j=i; j<limit; j+=i)
        {
            ds[j].pb(i);
        }
    }
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
