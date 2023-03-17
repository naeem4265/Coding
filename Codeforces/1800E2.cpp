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
    cin >> n >>k;
    string s,t;
    cin >> s >> t;

    ll l = max(0LL, n-k);
    ll r = min(n-1, k-1);
    for(i=l; i<=r; i++)
    {
        if(s[i]!=t[i])
        {
            cout <<"No\n";  return;
        }
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if(s==t)  cout <<"Yes\n";
    else      cout <<"No\n";
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

