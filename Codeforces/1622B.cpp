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
    cin >> n;
    ll lst[n+5][3];
    for(i=1; i<=n; i++)
    {
        cin >> m;
        lst[m][0] = i;
    }
    cin >> s;
    for(i=1; i<=n; i++)
    {
        m = lst[i][0];
        if(s[m-1]=='1')
        {
            lst[i][1] = 1;
        }
        else{
            lst[i][1] = 0;
        }
    }
    ll ct = n;
    ll ans[n+5];
    for(i=n; i>=1; i--)
    {
        if(lst[i][1])
            ans[lst[i][0]]= ct--;
    }
    for(i=n; i>=1; i--)
    {
        if(lst[i][1]==0)
            ans[lst[i][0]]= ct--;
    }
    for(i=1; i<=n; i++)
        cout <<ans[i]<<" ";
    cout <<endl;
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
