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
    ll i,j,n,m,k;
    string s,t;
    cin >> s;
    cin >> t;
    n = s.size();
    m = t.size();
    for(i=0,j=0; i<n && j<m; i++)
    {
        if(j&1 && i&1 && s[i]==t[j])
        {
            j++;
        }
        else if(j%2==0 && i%2==0 && s[i]==t[j])
        {
            j++;
        }
    }
    if(j==m)
    {
        cout <<"YES\n";
        return ;
    }
    for(i=0,j=0; i<n && j<m; i++)
    {
        if(j%2==0 && i&1 && s[i]==t[j])
        {
            j++;
        }
        else if(j&1 && i%2==0 && s[i]==t[j])
        {
            j++;
        }
    }
    if(j==m)
    {
        cout <<"YES\n";
        return ;
    }
    cout <<"NO\n";
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
