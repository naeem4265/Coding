#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 100008
using namespace std;
vector<ll > v[limit],v2[limit];
ll d[limit];
    map < pair<ll,ll>,ll > mp;

void Please_AC(ll tt)
{
    ll i,j,n,m,x,q;
    cin >> n >> q;
    while(q--)
    {
        cin >> i >> j >> x;
        if(i>j)  swap(i,j);
        v[j].pb(i);
        v[i].pb(j);
        mp[{i,j}] = x;
    }
    for(i=n; i>0; i--)
    {
        if(v[i].empty())
        {
            d[i] = 0;
            continue;
        }
        x = 1<<32;
        x--;
        bool ok = 0;
        for(ll j: v[i])
        {
            if(j<=i)
            {
                ok = 1;
                x = x&mp[{j,i}];
            }
        }
        if(ok){
            d[i] = d[i] | x;
            for(ll j: v[i])
            {
                if(j<=i)
                {
                    mp[{j,i}] -= x;
                }
                else
                {
                    d[i] = d[i] | mp[{i,j}];
                    mp[{i,j}] = 0;
                }
            }
        }

//        for(ll j: v[i])
//        {
//            if(j>i)
//            {
//                d[i] = d[i] | mp[{i,j}];
//            }
//        }
    }
    for(i=1; i<=n; i++)
    {
        cout << d[i] <<" ";
    }
    cout <<endl;
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
        Please_AC(t);
    return 0;
}
