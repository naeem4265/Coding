#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 100008
using namespace std;

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> q;
    ll fre[2][30];
    memset(fre, 0 , sizeof(fre));
    fre[0][0] = fre[1][0] = 1;
    ll len[2];  len[0] = len[1] = 1;
    while(q--)
    {
        string s;
        cin >> tt >> k >> s;
        n = s.size();
        len[tt-1] += k*n;
        for(i=0; i<n; i++)
        {
            fre[tt-1][s[i]-'a'] += k;
        }
        ll szs = len[0],szt=len[1];
        if(szt!=fre[1][0] || (szs==fre[0][0] && szs<szt))
        {
            cout <<"YES\n";
            continue;
        }
        else
            cout <<"NO\n";

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
