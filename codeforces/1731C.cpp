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
ll Xor[limit],n,m,cnt[limit],d[limit];

ll f(ll x)
{
    ll ct = 0;
    for(ll i=0; i<m; i++)    cnt[i]=0;
    for(ll i= 0; i<n; i++)
    {
        ll temp = x^Xor[i];
        if(Xor[i]==x)
            ct++;
        if(temp<m)
            ct = ct+(cnt[temp]);
        cnt[Xor[i]]++;
    }
    return ct;
}

void Please_AC(ll tt)
{
    ll i,j;
    cin >> n;

    for(i=0; i<n; i++)
        cin >> d[i];

    Xor[0] = d[0];
    for(ll i=1; i<n; i++)
        Xor[i] = Xor[i-1]^d[i];

    ll ans = (n*(n+1))/2;
    m = n*4LL;
    for(i=0; i<m; i++)
    {
        j = sqrt(i);
        j = j*j;
        if(i==j)
            ans -= f(j);
    }
    cout << ans <<endl;

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
