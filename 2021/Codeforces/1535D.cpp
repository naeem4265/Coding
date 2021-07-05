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

ll cost[limit];
vector<ll> child[limit];
ll parent[limit];

string s;

void update(ll pos)
{
    if(pos == Mod) return ;
    if(child[pos].size()==0)
    {
        if(s[pos]=='?')
            cost[pos] = 2;
        else
            cost[pos] = 1;
        update(parent[pos]);
    }
    else
    {
        if(s[pos]=='0')
        {
            cost[pos] = cost[child[pos][0]];
        }
        else if(s[pos]=='1')
        {
            cost[pos] = cost[child[pos][1]];
        }
        else
        {
            cost[pos] = cost[child[pos][0]] + cost[child[pos][1]];
        }
        update(parent[pos]);
    }
}

void solve(ll t)
{
    ll i,j,k,x,m,n;
    cin >> k;
    cin >> s;
    for(i=k-1,x=0; i>0; i--)
    {
        m = pow(2,i);
        n = x+m;
        for(j=0; j<m; j++)
        {
            parent[x] = n;
            child[n].pb(x);
            x++;
            if(j&1) n++;
        }
    }
    n = s.size()-1;
    parent[n] = Mod;
    for(i=0; i<n; i++)
    {
        update(i);
    }
    //for(i=n-1; i>=0; i--)  cout <<i<<" "<<parent[i] <<endl;
    ll q;
    cin >> q;
    while(q--)
    {
        ll p;
        char ch;
        cin >> p >> ch;
        p--;
        s[p] = ch;
        update(p);
        cout << cost[n] << endl;
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
