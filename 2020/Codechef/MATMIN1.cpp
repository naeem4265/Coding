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

void solve(int t)
{
    ll i,j,n,m,k,a;
    cin >> n >>m;
    ll ct[n+m][2];
    memset(ct,0,sizeof(ct));
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin >> a;
            ct[i+j][a]++;
        }
    }
    string s;
    cin >> s;
    ll p,q;
    cin >> p >> q;
    ll ans=0;
    for(i=0; i<n+m; i++)
    {
        ll mn1,mn2;
        mn1 = ct[i][0];
        mn2 = ct[i][1];
        if(s[i]=='0')
        {
            ans += min(ct[i][1]*p,ct[i][0]*p+q);
        }
        else
        {
            ans += min(ct[i][1]*p+q,ct[i][0]*p);
        }
    }
    cout <<ans<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

