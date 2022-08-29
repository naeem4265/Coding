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

    cin >> n >> m;
    string s[n+2];
    ll cnt=0;
    for(i=0; i<n; i++)
    {
        cin >> s[i];
        for(j=0; j<m; j++)
        {
            if(s[i][j]=='1')  cnt++;
        }
    }

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<m-1; j++)
        {
            ll ct=0;
            if(s[i][j]=='0') ct++;
            if(s[i][j+1]=='0') ct++;
            if(s[i+1][j]=='0') ct++;
            if(s[i+1][j+1]=='0') ct++;
            if(ct>=2)
            {
                cout <<cnt<<endl;
                return ;
            }
        }
    }
    cout <<max(0LL, min(n*m-2, cnt-1)) <<endl;

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
