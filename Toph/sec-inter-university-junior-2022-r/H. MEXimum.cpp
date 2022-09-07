#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("input.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

const int N = (int) 1e5+5;

vector<int> adj[N];
ll ar[N];
bool vis[N];
ll ma[N];
ll ans = 0;
void dfs(int u, ll mx){
   vis[u] = true;
   if(ar[u] < N-2)
      ma[ar[u]]++;
  // cout << u << ": " << ma[ar[u]] << " ";
   //cout << "ar = " << ar[u] << endl;
    while(ma[mx] != 0){
         mx++;
    }
   //cout << endl << "mx = " << mx << endl;
   //ans = max(ans, mx);
   if(mx > ans){
     ans = mx;
   }
   for(auto v: adj[u]){
      if(!vis[v]){
        dfs(v, mx);
      }
   }
   if(ar[u] < N-2)
      ma[ar[u]]--;
   //ans = max(ans, mx);
}


void Please_AC(ll tt)
{
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
       cin >> ar[i];
    }
    for(int i = 1; i < n; i++){
       int u, v; cin >> u >> v;
       adj[u].push_back(v);
       adj[v].push_back(u);
    }
    dfs(1, 0);
    cout << ans << endl;
    return ;
}


int  main()
{
    Fast
  // Freed
//    Fout
    ll t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
