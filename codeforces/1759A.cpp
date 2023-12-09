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
    string s;
    cin >> s;
    n = s.size();
    for(i=1; i<n; i++)
    {
        if(s[i-1]=='Y' && s[i]!='e')
        {
            cout <<"NO\n";
            return ;
        }
        if(s[i-1]=='e' && s[i]!='s')
        {
            cout <<"NO\n";
            return ;
        }
        if(s[i-1]=='s' && s[i]!='Y')
        {
            cout <<"NO\n";
            return;
        }
        if(s[i]!='Y' && s[i]!='e' && s[i]!='s')
        {
            cout <<"NO\n";
            return;
        }
    }
     i= 0;
        if(s[i]!='Y' && s[i]!='e' && s[i]!='s')
        {
            cout <<"NO\n";
            return;
        }
        cout <<"YES\n";
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

