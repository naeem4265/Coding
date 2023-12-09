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
ll n;
string s;

ll rec(ll pos,ll taken)
{         //cout <<pos<<" "<<s<<endl;
    if(pos==n)
    {         //cout <<pos<<" "<<taken<<" "<<s<<endl;
        ll sum = 0;
        for(ll i=0; i<n; i++)
        {
            sum = sum*10+ s[i]-'0';
        }
        if(sum%25 || (s[0]=='0' && n>1)) return 0;
        return 1;
    }
    if(s[pos]>='0' && s[pos]<='9')
        return rec(pos+1,taken);
    if(s[pos]=='X' && taken!=-1)
    {
        s[pos] = '0'+taken;
        ll ct;
        ct = rec(pos+1,taken);
        s[pos] = 'X';
        return ct;
    }
    if(s[pos]=='X' && taken==-1)
    {
        ll ct=0;
        for(ll i=0; i<10; i++)
        {
            s[pos] = '0'+i;
            ct += rec(pos+1,i);
        }
        s[pos] = 'X';
        return ct;
    }
    if(s[pos]=='_')
    {
        ll ct=0;
        for(ll i=0; i<10; i++)
        {
            s[pos]='0'+i;
            ct += rec(pos+1,taken);
        }
        s[pos] = '_';
        return ct;
    }
}

void solve(ll tt)
{
    ll i,j;
    cin >> s;
    ll ans = 0;
    n = s.size();
    if(s[n-2]=='_' && s[n-1]=='_')
    {
        s[n-2] = '2';
        s[n-1] = '5';
        ans += rec(0,-1);
        s[n-2] = '5';
        s[n-1] = '0';
        ans += rec(0,-1);
        s[n-2] = '7';
        s[n-1] = '5';
        ans += rec(0,-1);
        s[n-2] = '0';
        s[n-1] = '0';
        ans += rec(0,-1);
        cout << ans <<endl;
        return ;
    }
    if(s[n-2]=='_' && s[n-1]=='X')
    {
        s[n-2] = '2';
        s[n-1] = '5';
        ans += rec(0,5);
        s[n-2] = '5';
        s[n-1] = '0';
        ans += rec(0,0);
        s[n-2] = '7';
        s[n-1] = '5';
        ans += rec(0,5);
        s[n-2] = '0';
        s[n-1] = '0';
        ans += rec(0,0);
        cout << ans <<endl;
        return ;
    }
    if(s[n-2]=='X' && s[n-1]=='_')
    {
        s[n-2] = '2';
        s[n-1] = '5';
        ans += rec(0,2);
        s[n-2] = '5';
        s[n-1] = '0';
        ans += rec(0,5);
        s[n-2] = '7';
        s[n-1] = '5';
        ans += rec(0,7);
        s[n-2] = '0';
        s[n-1] = '0';
        ans += rec(0,0);
        cout << ans <<endl;
        return ;
    }
    if(s[n-2]=='X' && s[n-1]=='X')
    {
        s[n-2] = '0';
        s[n-1] = '0';
        ans += rec(0,0);
        cout << ans <<endl;
        return ;
    }
    cout << rec(0,-1) <<endl;
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
