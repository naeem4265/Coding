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
    cin >> n;
    map<string, bool> mp;
    string s[n+5];
    for(i=0; i<n; i++)
    {
        cin >> s[i];
        mp[s[i]] = 1;
    }
    for(i=0; i<n; i++)
    {
        string t="",t2="";
        ll sz = s[i].size();
        bool ok=0;
        for(j=0; j<sz-1; j++)
        {
            t += s[i][j];
            t2 = "";
            for(k=j+1; k<sz; k++)
                t2 += s[i][k];
            if(mp[t] && mp[t2])
            {
                ok = 1;
                break;
            }
        }
        cout <<ok;
    }
    cout <<endl;


    return ;
}


int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
