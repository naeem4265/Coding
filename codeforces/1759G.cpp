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

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
            new_data_type;

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    ll d[n+5];
    bool vis[n+5],ok=0;
    memset(vis, 0, sizeof(vis));
    for(i=2; i<=n; i+=2)
    {
    	cin >> d[i];
    	if(vis[d[i]])  ok = 1;
    	vis[d[i]] = 1;
    }
    new_data_type pbds;
    for(i=1; i<=n; i++)
    {
    	if(vis[i]==0)  pbds.insert(i);
    }
    for(i=n; i>0; i-=2)
    {
    	ll idx = pbds.order_of_key(d[i]);
    	if(ok || idx==0)  
    	{
    		cout <<-1<<endl;
    		return;
    	}
    	idx--;
    	d[i-1] = *pbds.find_by_order(idx);
    	pbds.erase(pbds.find(d[i-1]));
    }
    for(i=1; i<=n; i++)   cout <<d[i]<<" ";
   	cout <<endl;
    return ;
}


int  main()
{
    Fast
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}