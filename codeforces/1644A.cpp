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
    //cin >> n;
    bool vis[4]={0,0,0,0};
    cin >> s;
    for(i=0; i<6; i++)
    {
        if(s[i]<='z' && s[i]>='a')
        {
            if(s[i]=='r')
                vis[0] = 1;
            else if(s[i]=='g')
                vis[1] = 1;
            else
                vis[2] = 1;
        }
        else if(s[i]=='R' && vis[0]==0)
        {
            cout <<"NO\n";
            return ;
        }
        else if(s[i]=='G' && vis[1]==0)
        {
            cout <<"NO\n";
            return ;
        }
        else if(s[i]=='B' && vis[2]==0)
        {
            cout <<"NO\n";
            return ;
        }
    }
    cout <<"YES\n";

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
