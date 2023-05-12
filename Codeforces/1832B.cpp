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
    cin >> n >> k;
    ll d[n+5];
    ll sum = 0;
    for(i=0; i<n; i++){
        cin>> d[i];
        sum += d[i];
    }
    sort(d, d+n);
    for(i=0; i<2LL*k; i++)
        sum -= d[i];
    ll ans = sum;
    for(j=n-1, i=2LL*k-1; i>=0; i-=2, j--)
    {
        sum += d[i]+d[i-1];
        sum -= d[j];
        ans = max(ans, sum);
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

