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
    ll i,j,n,m,k,l;
    string s;
    cin >> n >> k >> l;
    vector<ll> v;
    for(i=0; i<n; i++)
    {
        cin >> m >> tt;
        if(tt==l)  v.pb(m);
    }
    //v.pb(0);
    if(v.size()<k)
    {
        cout <<-1<<endl;
        return;
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    ll ans = 0;
    for(i=0; i<k; i++)
    {
        ans += v[i];
    }
    cout << ans <<endl;


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
