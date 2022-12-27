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
    ll i,j,n, x;
    cin >> n >> x;

    string s;
    cin >> s;
    ll ans = 0;
    vector<ll> v;
    for(i=0; i<n; i++)
    {
        if(s[i]=='0')   break;
        ans++;
    }
    if(i==n)
    {
        cout << ans <<endl;
        return;
    }
    ll l = i;
    for(i=l+1; i<n; i++)
    {
        if(s[i]=='1')
        {
            ans++;
            if(l<i)
                v.pb(i-l);
            l = i+1;
        }
    }
    v.pb(i-l);
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for(i=0; i<v.size(); i++)
    {
        if(v[i] >= (x-1)/2)
        {
            ans += (x-1)/2;
            break;
        }
        ans += v[i];
        x -= (v[i]*2LL+1);
    }
    cout << ans <<endl;


    return ;
}


int  main()
{
    //Fast
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

