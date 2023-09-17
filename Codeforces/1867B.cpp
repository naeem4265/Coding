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
    string s;
    cin >> n;
    cin >> s;
    ll mis = 0, match=0;
    for(i=0,j=n-1; i<j; i++,j--)
    {
        if(s[i] != s[j])  mis++;
        if(s[i] == s[j])  match+=2;
    }
    for(i=0; i<=n; i++)
    {
        ll temp = i-mis;
        if(temp<0)   cout <<0;
        else if(temp%2==0 && temp<=match)  cout <<1;
        else if(temp&1 && (temp-1)<=match && n&1)   cout <<1;
        else  cout <<0;
    }
    cout <<endl;



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
