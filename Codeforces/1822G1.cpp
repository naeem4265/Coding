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

ll cnt[limit];


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    scanf("%lld", &n);
    ll d[n+5];
    for(i=0; i<n; i++)
    {
        scanf("%lld", &d[i]);
        cnt[d[i]]++;
    }
    sort(d, d+n);
    ll ans = 0;
    for(i=0; i<n; i++)
    {
        if(i && d[i]==d[i-1])   continue;
        if(cnt[d[i]]>2)
            ans += cnt[d[i]]*(cnt[d[i]]-1)*(cnt[d[i]]-2);
        for(j=2; ; j++)
        {
            if(d[i]*j*j > d[n-1])   break;
            ans += cnt[d[i]]*cnt[d[i]*j]*cnt[d[i]*j*j];
        }
    }
    printf("%lld\n", ans);


    for(i=0; i<n; i++)
    {
        cnt[d[i]]--;
    }

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

