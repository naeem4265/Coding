#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 800000008
using namespace std;

bool vis[limit];
vector<int>prime;
void seive()
{
    int i,j;
    vis[0]=vis[1]=1;
    for(i=3; i*i<limit; i+=2)
    {
        if(vis[i]) continue;
        for(j=i*i; j<limit; j+=2*i)
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
    cin >> n ;

    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    seive();
    cout << prime.size()<<endl;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
