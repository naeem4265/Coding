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
    ll d[n+5];
    string s;
    cin >> s;
    ll one = 0, zero = 0, leno = 0, lenz=0;
    for(i=0; i<n; i++)
    {
        if(s[i]=='1') one++;
        else zero++;
    }
    for(i=0,j=0; i<n; i++)
    {
        if(s[i]=='1')
        {
            leno = max(leno, i-j);
            j = i+1;
        }
    }
    leno = max(leno, i-j);
    for(i=0,j=0; i<n; i++)
    {
        if(s[i]=='0')
        {
            lenz = max(lenz, i-j);
            j = i+1;
        }
    }
    lenz = max(lenz, i-j);
    cout << max({one*zero, leno*leno, lenz*lenz}) <<endl;
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
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

