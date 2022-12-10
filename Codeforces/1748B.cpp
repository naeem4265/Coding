#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    string s;
    cin >> s;
    ll cnt[11];
    ll ans = n*(n+1)/2;

    for(i=0; i<n; i++)
    {
            for(k=0; k<=10; k++)
            {
                cnt[k] = 0;
            }
        for(j=i; j<n; j++)
        {
            cnt[s[j]-'0']++;
            ll dis = 0, mx = 0;
            for(k=0; k<10; k++)
            {
                if(cnt[k])  dis++;
                if(mx<cnt[k])  mx = cnt[k];
            }
            if(mx>10)
            {
                ans -= (n-j);
                break;
            }
            if(mx>dis)   ans--;
        }
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

