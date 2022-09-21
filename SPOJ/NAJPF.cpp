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

vector<ll> v;
///kmp pi table build O(|p|)
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
        //if(now==m)   v.pb(i-m-1);
    }
}

///kmp O(|s|)
ll kmp(string s,string p)
{
    ll ans=0,now = -1, sz = s.size(),szp=p.size();
    for(ll i=0; i<sz; i++)
    {
        while( now!=-1 && p[now+1]!=s[i])
        {
            now = pi_tab[now];
        }
        if(p[now+1]==s[i])
            now++;
        if(now==szp-1)
        {
            ans++;
            v.pb(i+1);
        }
    }
    return ans;
}


void Please_AC(ll tt)
{
    ll i,j;
    string s,p;
    cin >> s >> p;
    m = p.size();  m--;
    //p = p+'#'+s;
    v.clear();

    build(p);
    kmp(s,p);
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

///lightoj.com/problem/substring-frequency
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
