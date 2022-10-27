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

map<ll,bool> mp;
map<ll,ll> nxt;

ll Rec(ll k)
{       //cout <<"hrer "<<k<<endl;
    if(!mp[k])  return 0;
    ll i = max(2LL, nxt[k]/k);
    for(; ; i++)
    {
        ll x = Rec(i*k);
        if(x==0LL)
        {
            return nxt[k] = i*k;
        }
    }
}

void Please_AC(ll tt)
{
    ll q,x,k;
    cin >> q;
    mp[0] = 1;
    while(q--)
    {
        char ch;
        cin >> ch;
        if(ch=='+')
        {
            cin >> x;
            mp[x] = 1;
        }
        else
        {
            cin >> k;
            x = Rec(k);
            cout <<max(k, x) <<endl;
        }
    }


    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
  //  cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
