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
    ll d[n+5],mx = -1;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        mx = max(mx, d[i]);
    }
    vector<ll> b,c;
    for(i=0; i<n; i++)
    {
        if(d[i]<mx)  b.pb(d[i]);
        else   c.pb(d[i]);
    }
    if(b.empty())
    {
        cout <<-1<<endl;
        return;
    }
    cout <<b.size()<<" "<<c.size()<<endl;
    for(auto x: b)  cout <<x<<" ";   cout <<endl;
    for(auto x: c)  cout <<x<<" ";   cout <<endl;


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
