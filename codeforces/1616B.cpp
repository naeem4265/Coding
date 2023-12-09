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
    cin >> s;

    vector<char> v;
    v.pb(s[0]);

    if(n==1 || s[0]==s[1])
    {
        cout <<s[0]<<s[0]<<endl;
        return ;
    }

    for(i=1; i<n; i++)
    {
        if(s[i]>s[i-1])
        {
            break;
        }
        v.pb(s[i]);
    }
    ll sz = v.size();

    for(i=0; i<sz; i++)
        cout <<v[i];
    for(i=sz-1; i>=0; i--)
        cout <<v[i];
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
