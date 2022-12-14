#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s,t, pre="";
    cin >> n;
    cin >> s;
    map<string, bool> mp;
    for(i=1; i<n; i++)
    {
        t = "";
        t += s[i-1];
        t += s[i];
        if(mp[t])
        {    // cout <<i<<" "<<t<<endl;
            cout << "YES\n";
            return;
        }
        mp[pre] = 1;
        pre = t;
    }
    cout << "NO\n";
    return ;
}


int  main()
{
    Fast
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

