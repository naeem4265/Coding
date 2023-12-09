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

ll n;
string s;
vector<char> v;
char ch[27];

bool rec(ll ct,ll pos)
{
    if(ct==0)
    {          //cout << "here\n";
        ll sz = v.size();
        bool ok=0;
        for(ll i=0,j,k; i<n; i++)
        {
            for(j=0,k=i; j<sz && k<n; j++,k++)
            {
                if(s[k]!=v[j]) break;
            }
            if(j==sz)
            {
                ok = 1;
                break;
            }
        }
        if(ok==0)
        {
            for(ll i=0; i<sz; i++)
                cout <<v[i];
            cout << endl;
            return 1;
        }
        return 0;
    }
    if(pos>25) return 0;

    v.pb(ch[pos]);
    if(rec(ct-1,0)) return 1;
    v.pop_back();
    return rec(ct,pos+1);
}

void solve(ll t)
{
    ll i;
    cin >> n;
    cin >> s;

    for(i=1; ; i++)
    {
        v.clear();
        if(rec(i,0)) return ;
    }
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=0; t<26; t++)
        ch[t] = 'a'+t;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
