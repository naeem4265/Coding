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
    string s;
    cin >> s;
    n = s.size();

    ll ch[n+5];

    for(i=0; i<n; i++)
    {
        ch[i] = s[i];
    }

    for(i=n-1; i>=0; i--)
    {
        if(s[i]!='?')
        {
            for(j=i+1; j<n; j++)
            {
                if(s[j]!='?')
                {
                    break;
                }
                if(s[j-1]=='0')
                    s[j] = '1';
                else
                    s[j] = '0';
            }
            for(j=i-1; j>=0; j--)
            {
                if(s[j]!='?')
                {
                    break;
                }
                if(s[j+1]=='0')
                    s[j] = '1';
                else
                    s[j] = '0';
            }
        }
    }

    if(s[0]=='?')
    {
        s[0] = '0';
        for(j=1; j<n; j++)
        {
            if(s[j-1]=='0')
                s[j] = '1';
            else
                s[j] = '0';
        }
    }

    ll pre[n+5];
    pre[0] = 1;
    ll ans = 1;
                       //cout << s << endl;
    for(i=1; i<n; i++)
    {
        if(ch[i]=='?')
        {
            pre[i] = pre[i-1]+1;
            ans+= pre[i];
            continue;
        }
        for(j=i-1; j>=0; j--)
        {
            if(ch[j]!='?') break;
        }
        j = max(1LL,j+1);
        for(; j<=i; j++)
        {
            if(s[j-1]==s[j])
                pre[j] = 1;
            else
                pre[j] = pre[j-1]+1;
        }
        if(s[i]!=s[i-1])
        {
            pre[i] = pre[i-1]+1;
            ans+= pre[i];
        }
        else
        {
            ans++;
            pre[i] = 1;
        }         //cout <<i<<" "<< ans << endl;

//        if(s[i-1]==s[i]) pre[i] = 1;
//        else pre[i] = pre[i-1] + 1;
    }
    cout << ans << endl;
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
