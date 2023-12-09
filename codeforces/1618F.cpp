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
#define limit 2000008
using namespace std;
string w;
map<string, ll> mymap;
ll k,dp[limit],m;

string dtb(ll x)
{
    string s;
    s = "";
    while(x)
    {
        if(x%2)
            s += '1';
        else
            s += '0';
        x /= 2;
    }
    reverse(s.begin(),s.end());
    return s;
}

ll rec(string s)
{
    if(mymap[s]==0)
        mymap[s] = k++;    //cout <<k<<" "<<s<<endl;
    if(s==w)
        return dp[mymap[s]]=1;
    if(dp[mymap[s]] != -1)
        return dp[mymap[s]];
    dp[mymap[s]] = 0;

    string t;
    t = "";
    ll sz = s.size(),i;
    for(i=sz-1; i>=0; i--)
    {
        if(s[i]=='1')  break;
    }
    for( ; i>=0; i--)
        t += s[i];

    dp[mymap[s]] = rec(t);   //cout <<k<<" "<<dp[mymap[s]]<<" "<<t<<endl;
    if(dp[mymap[s]])   return dp[mymap[s]];
    t = s;
    t += '1';
    if(t.size()>m) return dp[mymap[s]];
    reverse(t.begin(), t.end());
    dp[mymap[s]] = rec(t);        //cout <<k<<" "<<dp[mymap[s]]<<" "<<t<<endl;
    return dp[mymap[s]];
}

void solve(ll tt)
{
    ll i,j,n;
    ll x,y;
    scanf("%lld %lld", &x, &y);
    mymap.clear();
    string s = dtb(x);
    w = dtb(y);   //cout <<s<<" "<<w<<endl;
    m = w.size();
    k = 1;
    memset(dp,-1,sizeof(dp));
    rec(s);
    if(dp[mymap[s]])
        cout <<"YES\n";
    else
        cout <<"NO\n";
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
