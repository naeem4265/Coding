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

void solve(ll t)
{
    ll i,j,n,m,k;
    cin >> n >> m;
    string s[n+5],r[n+5];
    ll cnt[30];
    memset(cnt,0,sizeof(cnt));

    for(i=0; i<n; i++)
    {
        cin >> s[i];
    }

    for(i=1; i<n; i++)
    {
        cin >> r[i];
    }

    for(j=0; j<m; j++)
    {
        for(i=0; i<27; i++)
        {
            cnt[i] = 0;
        }
        for(i=0; i<n; i++)
        {
            cnt[s[i][j]-'a']++;
        }
        for(i=1; i<n; i++)
        {
            cnt[r[i][j]-'a']--;
        }
        char ch='a';
        for(i=0; i<27; i++)
        {
            if(cnt[i])
            {
                cout <<(char)('a'+i);
            }
        }
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
        solve(t);
    return 0;
}
