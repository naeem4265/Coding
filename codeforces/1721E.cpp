#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 10000008
using namespace std;

ll pi_tab[limit],now;
void build(string s)
{
    now = -1;
    pi_tab[0] = -1;
    ll sz = s.size();
    for(ll i=1; i<sz; i++)
    {
        while( now!=-1 && s[now+1]!=s[i])
        {
            now = pi_tab[now];
        }
        if(s[now+1]==s[i])
            now++;;
        pi_tab[i] = now;
    }
}


void add_build(string s,ll from,ll now)
{
    ll sz = s.size();
    for(ll i=from; i<sz; i++)
    {
        while( now!=-1 && s[now+1]!=s[i] )
        {
            now = pi_tab[now];
        }
        if(s[now+1]==s[i])
            now++;;
        pi_tab[i] = now;
    }
}



void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s,t;
    cin >> s;
    m = s.size();
    build(s);
    cin >> q;
    while(q--)
    {
        cin >> t;
        add_build(s+t,m, now);
        ll sz = t.size();
        for(i=m,j=0; j<sz; j++,i++)   cout <<pi_tab[i]+1<<" ";  cout <<endl;
    }

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
