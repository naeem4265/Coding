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
    string s,t;
    cin >> s >> t;
    ll ct = 0;
    for(i=1; i<n; i++)
    {
        if(s[i]==s[i-1])  ct++;
    }
    for(i=1; i<m; i++)
    {
        if(t[i]==t[i-1])  ct++;
    }
    if(ct==0 || (ct==1 && s[n-1]!=t[m-1]))  cout <<"YES\n";
    else   cout <<"NO\n";
    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

