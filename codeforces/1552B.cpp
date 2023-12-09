#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    ll ans = -1;
    cin >> n;
    ll d[6],e[n+5][6];
    d[0] = d[1] = d[2] = d[3] = d[4] = inf;
    for(i=0; i<n; i++)
    {
        for(j=0; j<5; j++)
            cin >> e[i][j];
        ll ct=0;
        for(j=0; j<5; j++)
        {
            if(d[j]>e[i][j]) ct++;
        }
        if(ct>2)
        {
            for(j=0; j<5; j++)
                d[j] = e[i][j];
            ans = i;
        }
    }

//    for(i=0; i<5; i++)
//        cout <<d[i]<<" ";cout << endl;

    for(i=0; i<n; i++)
    {
        ll ct=0;
        for(j=0; j<5; j++)
        {
            if(d[j]<e[i][j]) ct++;
        }
        if(ct<3 && i!=ans)
        {
            cout <<-1<<endl;
            return ;
        }
    }
    cout << ans+1 << endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
