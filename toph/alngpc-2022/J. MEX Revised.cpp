#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;
ll pr[limit];
ll Find(ll u)
{
    if(pr[u]==u)  return u;
    return pr[u] = Find(pr[u]);
}
void Union(ll u, ll v)
{
    pr[Find(v)] = Find(u);
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n >> q;

    cout <<"Case "<<tt<<":\n";

    for(i=0; i<n+5; i++)
        pr[i] = i;
    while(q--)
    {
        ll tp,x;
        cin >> tp;
        cin >> x;
        if(tp==1)
        {
            Union(x+1, x);   //cout <<"here "<<x<<" "<<Find(x)<<endl;
        }
        else
        {
            cout << Find(x) <<endl;
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
    cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
