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
    int i,j,n,m;
    bool ok=1;
    string s;
    cin >> n >> m;
    cin >> s;
    for(i=0; i<n-m; i++)
    {
        if(s[i]!='?' && s[i]!=s[i+m] && s[i+m]!='?')
        {
            cout <<"NO\n";
                    return ;
        }
        if(s[i]!='?')
            s[i+m]=s[i];
        if(s[i+m]!='?')
            s[i]=s[i+m];
    }
    int one=0,zero=0,change=0;
    for(i=0; i<m; i++)
    {
        if(s[i]=='1')
            one++;
        if(s[i]=='0')
            zero++;
        if(s[i]=='?')
            change++;
    }
    for(i=m; i<n; i++)
    {
        if(abs(one-zero)>change)
        {
            cout <<"NO\n";
            return ;
        }
        if(s[i]=='1')
            one++;
        if(s[i]=='0')
            zero++;
        if(s[i]=='?')
            change++;
        if(s[i-m]=='1')
            one--;
        if(s[i-m]=='0')
            zero--;
        if(s[i-m]=='?')
            change--;
    }
    if(abs(one-zero)>change)
    {
        cout <<"NO\n";
        return ;
    }
    cout <<"YES\n";
    return ;
}
int  main()
{
 //   Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
