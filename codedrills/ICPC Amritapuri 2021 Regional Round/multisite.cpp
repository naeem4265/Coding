#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;


void Please_AC(ll tt)
{
    ll n, x, y; cin >> n >> x >> y;
    string ch; cin >> ch;
    ll a = 0, b = 0, c = 0;
    for(char cc: ch){
        if(cc == 'A') a++;
        else if(cc == 'B') b++;
        else c++;
    }
    ll ans = min(a, x);
      x -= ans;
     ans += min(b, y);
     y -= min(b, y);
     ans += min(x, c);
     c -= min(x, c);
     ans += min(y, c);
     cout << ans << endl;


    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}


