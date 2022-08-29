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


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s,t;
    cin >> n;
    ll d[n+5];
    cin >> s;

    if(s[0]!='9')
    {
        for(i=0; i<n; i++)
            cout <<9-(s[i]-'0');
        cout <<endl;
        return ;
    }
    reverse(s.begin(), s.end());
    ll carry = 0;
    vector<char> v;
    for(i=0; i<n; i++)
    {
        ll x = carry+s[i]-'0';
        if(x>1)
        {
            carry = 1;
            v.pb('0'+(11-x));
        }
        else
        {
            carry = 0;
            v.pb('0'+1-x);
        }
    }
    for(i=n-1; i>=0; i--)
        cout <<v[i];
    cout <<endl;

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
