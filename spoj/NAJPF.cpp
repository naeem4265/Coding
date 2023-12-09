#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 2000008
using namespace std;

vector<ll> v;
ll pi_tab[limit],m;
void build(string p)
{
    ll now = -1;
    pi_tab[0] = -1;
    ll sz = p.size();
    for(ll i=1; i<sz; i++)
    {
        while( now!=-1 && p[now+1]!=p[i])
        {
            now = pi_tab[now];
        }
        if(p[now+1]==p[i])
            now++;;
        pi_tab[i] = now;
        if(now==m)   v.pb(i-m-1);
    }
}

void Please_AC(ll tt)
{
    ll i,j;
    string s,p;
    cin >> s >> p;
    m = p.size();  m--;
    p = p+'#'+s;
    v.clear();

    build(p);
    if(v.empty())
    {
        cout <<"Not Found\n";
        return ;
    }
    cout << v.size() <<endl;
    for(i=0; i<v.size(); i++)    cout <<v[i]-m<<" ";
    cout <<endl;
    return ;
}

int  main()
{
 //   Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
