#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;
ll n;
string s,t;
ll ans;

void f(ll p)
{   //cout <<ans<<" "<<p<<" "<<s<<endl;
    ans++;
    if(p==(n-1))
    {
        ans = -Mod;
        return ;
    }
    if(s[p-1]!=s[p+1])
    {
        if(s[p]=='0')  s[p] = '1';
        else  s[p] = '0';
        return;
    }
    f(p+1);
    if(s[p]=='0')  s[p] = '1';
    else  s[p] = '0';
}

void Please_AC(ll tt)
{
    ans = 0;
    cin >> n;
    cin >> s >> t;
    if(s[0]!=t[0] || s[n-1]!=t[n-1])
    {
        cout <<-1<<endl;
        return ;
    }
    queue<ll> can_change, changed;
    for(i=0; i<n-1; i++)
    {
        if(s[i]==s[i+1])
            can_change.push(i);
    }
    for(ll i=1; i<n; i++)
    {
        while(!changed.empty() && changed.front()<i)  changed.pop();
        ct = changed.size();
        if(ct&1)
        {
            if(s[i]=='0')  s[i] = '1';
            else  s[i] = '0';
        }
        while(!can_change.empty() && can_change.front()<i)
            can_change.pop();
        if(s[i]!=t[i])
        {
            if(can_change.empty())
            {
                cout <<-1<<endl;
                return ;
            }
            pos = can_change.front();
            can_change.pop();
            changed.pb(pos);
            ans += pos-i+1;
        }
    }
    if(ans<0) ans = -1;
    cout << ans <<endl;

    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
