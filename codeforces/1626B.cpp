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
    cin >> s;
    n = s.size();
    for(i=n-2; i>=0; i--)
    {
        if((s[i]-'0'+s[i+1]-'0')>9)
        {
            m = s[i]-'0'+s[i+1]-'0';
            s[i] = '0'+m/10;
            s[i+1] = '0'+m%10;
            cout << s<<endl;
            return ;
        }
    }
    m = s[0]+s[1]-'0'-'0';
    s[1] = m+'0';
    for(i=1; i<n; i++)
        cout <<s[i];
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
