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
    cin >> n;
    if(n%2==0)
    {
        cout <<"No\n";
        return;
    }
    m = n/2;
    bool vis[2*n+5];
    memset(vis, 0, sizeof(vis));

    cout <<"YES\n";
    for(i=1,j=2*n, k=0; k<=m; i++, j-=2, k++)
    {
        vis[i] = 1;
        vis[j] = 1;
        cout <<i<<" "<<j<<endl;
    }
    vector<ll> v;
    for(i=1; i<=2*n; i++)
    {
        if(vis[i]==0)   v.pb(i);
    }
    sort(v.begin(), v.end());
    j = v.size();
    j--;
    for(i=0; i<j; i++,j--)  cout <<v[i]<<" "<<v[j]<<endl;

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

