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
    ll i=0,j,n,m,k,q;
    cin >> n;
    string s;
    cin >> s;
    ll ok = 0;
    while(i<n && (s[i]=='m' || s[i]=='M'))
    {
        ok = 1;
        i++;
    }
    if(ok==0)
    {
        cout <<"No\n";
        return;
    }
    ok = 0;
    while(i<n && (s[i]=='e' || s[i]=='E'))
    {
        ok = 1;
        i++;
    }
    if(ok==0)
    {
        cout <<"No\n";
        return;
    }
    ok = 0;
    while(i<n && (s[i]=='o' || s[i]=='O'))
    {
        ok = 1;
        i++;
    }
    if(ok==0)
    {
        cout <<"No\n";
        return;
    }
    ok = 0;
    while(i<n && (s[i]=='w' || s[i]=='W'))
    {
        ok = 1;
        i++;
    }
    if(ok==0 || i<n)
    {
        cout <<"No\n";
        return;
    }
    cout <<"Yes\n";

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

