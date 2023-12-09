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
    cin >> n >> m;
    ll d[n*m+5];
    for(i=0,k=0; i<n; i++)
    {
        for(j=0; j<m; j++, k++)
        {
            cin >> d[k];
        }
    }
    sort(d, d+k);
    if(n>m)   swap(n, m);
    ll ans = (d[k-1]-d[0])*n*(m-1);    //cout << ans <<endl;
    ans += max((d[k-1]-d[1]), (d[k-2]-d[0]))*(n-1);
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

