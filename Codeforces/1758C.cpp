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
    ll i,j,n,m,k,x;
    cin >> n >> x;
    m = x;
    while(m<n)  m *= 2;
    if(n%x)
    {
        cout <<-1<<endl;
        return;
    }
    bool vis[n+5];
    memset(vis, 0, sizeof(vis));
    cout <<x<<" ";
    vis[x] = 1;
    for(i=2; i<n; i++)
    {
        if(vis[i]==0)
        {
            cout <<i<<" ";
            vis[i] = 1;
            continue;
        }
        m = n;
        j = 2;
        while(n%(i*j))  j++;
        m = i*j;
        cout <<m<<" ";
        vis[m] = 1;
    }
    cout <<1<<endl;


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
