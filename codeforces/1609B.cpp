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
#define limit 1000008
using namespace std;

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n >> q;
    cin >> s;
    ll ct=0;
    for(i=2; i<n; i++)
    {
        if(s[i-2]=='a' && s[i-1]=='b' && s[i]=='c')   ct++;
    }
    while(q--)
    {
        char ch;
        ll pos;
        cin >> pos;
        pos--;
        cin >> ch;
        if(pos<(n-2)&& s[pos]=='a' && s[pos+1]=='b' && s[pos+2]=='c')
        {
            ct--;
        }
        if(pos<(n-1) && pos>0 && s[pos-1]=='a' && s[pos]=='b' && s[pos+1]=='c')
        {
            ct--;
        }
        if(pos>1 && s[pos-2]=='a' && s[pos-1]=='b' && s[pos]=='c')
        {
            ct--;
        }
        s[pos] = ch;
        if(pos<(n-2)&& s[pos]=='a' && s[pos+1]=='b' && s[pos+2]=='c')
            ct++;
        if(pos<(n-1) && pos>0 && s[pos-1]=='a' && s[pos]=='b' && s[pos+1]=='c')
            ct++;
        if(pos>1&& s[pos-2]=='a' && s[pos-1]=='b' && s[pos]=='c')
            ct++;
        cout << ct <<endl;

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
