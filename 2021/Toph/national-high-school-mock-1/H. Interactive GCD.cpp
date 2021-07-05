#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 100
using namespace std;

bool vis[limit];
vector<int>prime,bad;
void seive()
{
    vis[0]=vis[1]=1;
    for(int i=4; i<limit; i+=2) vis[i] = 1;
    for(int i=3; i*i<limit; i+=2)
    {
        if(vis[i]) continue;
        for(int j=i*i; j<limit; j+=2*i)
        {
            vis[j] = 1;
        }
    }
    prime.pb(2);
    for(int j=3; j<limit; j+=2)
        if(vis[j]==0)
            prime.pb(j);
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cout <<"Start\n";
    cin >> n;
    for(i=0; i<prime.size(); i++)
    {
        cout << prime[i] <<endl;
        cin >> m;
        n -= m;
    }
    for(i=0; i<bad.size(); i++)
    {
        cout << bad[i] <<endl;
        cin >> m;
        n += m;
    }
    if( n&1 ) cout <<"No\n";
    else cout <<"Yes\n";
    cin >> s;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    seive();
    prime.pb(30);
    prime.pb(42);
    prime.pb(66);
    prime.pb(78);
    prime.pb(70);
    bad.pb(2*3);
    bad.pb(2*5);
    bad.pb(2*7);
    bad.pb(2*11);
    bad.pb(2*13);
    bad.pb(2*17);
    bad.pb(2*19);
    bad.pb(2*23);
    bad.pb(2*29);
    bad.pb(2*31);
    bad.pb(2*37);
    bad.pb(2*41);
    bad.pb(2*43);
    bad.pb(2*47);
    bad.pb(3*5);
    bad.pb(3*7);
    bad.pb(3*11);
    bad.pb(3*13);
    bad.pb(3*17);
    bad.pb(3*19);
    bad.pb(3*23);
    bad.pb(3*29);
    bad.pb(3*31);
    bad.pb(5*7);
    bad.pb(5*11);
    bad.pb(5*13);
    bad.pb(5*17);
    bad.pb(5*19);
    bad.pb(7*11);
    bad.pb(7*13);
    //for(ll i=0; i<prime.size(); i++) cout <<prime[i]<<" ";  cout <<endl;
    //for(ll i=0; i<bad.size(); i++) cout <<bad[i]<<" ";     cout <<endl;
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    fflush(stdout);
    return 0;
}
