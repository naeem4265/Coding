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

    cin >> n >> m;
    string s[n+5];
    for(i=0; i<n; i++)  cin >> s[i];
    ll ans = 0,l;
    for(l=0,i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(s[j][i]=='x')   break;
        }
        if(j<n)
        {
            ans = max(ans, i-l);
            l = i+1;
        }
    }
    ans = max(ans, i-l);
    cout << ans <<endl;


    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
  //  cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
