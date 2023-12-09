#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e5+5;
const ll Mod = 1e9+7;
using namespace std;
vector<ll> v;

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    scanf("%lld", &n);
    ll d[n+5];
    for(i=0; i<n; i++)   scanf("%lld", &d[i]);

    v.clear();
    for(i=0; i<n; i++)
    {
        j = sqrt(d[i]);
        if(j*j != d[i])  j++;
        for(; j<limit; j++)
        {
            v.pb(j*j-d[i]);
        }
    }
    sort(v.begin(), v.end());
    v.pb(-1);
    ll ans = 0;
    m = v.size();
    for(i=1,j=0; i<m; i++)
    {
        if(v[j]!=v[i])
        {
            if(ans<(i-j))
                ans = i-j;
            j = i;
        }
    }
   // cout << ans <<endl;
    printf("%lld\n", ans);

    return ;
}


int  main()
{
    //Fast
    //Freed
    //Fout
    ll t,tt=1;
    scanf("%lld", &tt);
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

