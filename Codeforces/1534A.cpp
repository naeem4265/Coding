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

void solve(ll t)
{
    ll i,j,n,m,k;
    cin >> n >> m;
    string s[n+5];
    for(i=0; i<n; i++) cin >> s[i];
    char odd='W',even='R';
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(s[i][j]=='R')
            {
                if((i+j)&1)
                {
                    odd = 'R';
                    even = 'W';
                }
                else
                {
                    even = 'R';
                    odd = 'W';
                }
                i = n;
                break;
            }
            if(s[i][j]=='W')
            {
                if((i+j)&1)
                {
                    odd = 'W';
                    even = 'R';
                }
                else
                {
                    even = 'W';
                    odd = 'R';
                }
                i = n;
                break;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if((i+j)&1)
            {
                if(s[i][j]!='.' && odd!=s[i][j])
                {
                    cout <<"NO\n";
                    return ;
                }
                s[i][j] = odd;
            }
            else
            {
                if(s[i][j]!='.' && even!=s[i][j])
                {
                    cout <<"NO\n";
                    return ;
                }
                s[i][j] = even;
            }
        }
    }
    cout <<"YES\n";
    for(i=0; i<n; i++) cout << s[i] << endl;
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
