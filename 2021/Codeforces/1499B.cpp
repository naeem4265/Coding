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
    ll i,j,n,m,k;
    string s;
    cin >> s ;
    n = s.size();
    for(i=n-2; i>=0; i--)
    {
        if(s[i]=='0' && s[i+1]=='0')
        {
            for(j=i-1; j>=0; j--)
            {
                if(s[j]=='1' && s[j+1]=='1')
                {
                    cout <<"No\n";
                    return ;
                }
            }
        }
    }
    for(i=1; i<n; i++)
    {
        if(s[i]=='1' && s[i-1]=='1')
        {
            for(j=i+1; j<n; j++)
            {
                if(s[j]=='0' && s[j-1]=='0')
                {
                    cout <<"No\n";
                    return ;
                }
            }
        }
    }
    cout <<"Yes\n";
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
