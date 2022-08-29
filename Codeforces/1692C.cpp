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
    ll i,j,n=8,m,k,q;

    string s[n+5];
    for(i=0; i<n; i++)
        cin >> s[i];
    for(i=1; i<n-1; i++)
    {
        for(j=1; j<8; j++)
        {
            if(s[i][j]=='.')  continue;
            if(s[i-1][j-1]=='.' || s[i-1][j+1]=='.' || s[i+1][j+1]=='.' || s[i+1][j-1]=='.')  continue;
            cout <<i+1<<" "<<j+1<<endl;
            return ;
        }
    }


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
