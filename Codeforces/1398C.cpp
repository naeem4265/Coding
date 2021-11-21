#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dbg puts("Viva la vida");
#define CHECK(x) cout << (#x) << " is " << (x) << endl;
#define nl puts("");
#define mp make_pair
#define IN(x) scanf("%d",&x);
#define INL(x) scanf("%lld",&x);
#define OUT(x) printf("%d",x);
#define OUTL(x) printf("%lld",x);
#define MAX 200005
#define MOD 1000000007
#define INF (1 << 31)
#define CASE(x,y) printf("Case %d: %d\n",++x,y);
#define FASTIO ios::sync_with_stdio(false);cin.tie(0);
#define PI acos(-1.0)
#define int ll
/*
	when i get older
	i will be stronger
	they'll call me freedom
	just like a waving flag
*/
void solve()
{
	int i,j,k,l,r,m,n,a,b,c,d,x,y,z,t;
	cin>>n;
	map<int,int> cnt;
	int sh=0;
	cnt[sh]++;
	string s;
	cin>>s;
	int ans=0;
	for(i=0; i<s.size(); i++)
	{           //cout <<"Naeem \n";
		x=s[i]-'0';
		sh+=x-1;
		ans+=cnt[sh];
		cnt[sh]++;    cout <<x<<" "<<sh<<" "<<cnt[sh]<<" "<<ans<<endl;
	}
	cout<<ans<<endl;


}
int32_t main()
{
	FASTIO
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}
