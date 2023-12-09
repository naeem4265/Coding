#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 2e5+5;
const ll Mod = 1e9+7;
using namespace std;

map<ll,ll> mp;
vector<ll> even[limit], odd[limit];
ll n,q;
ll d[limit];
ll xr[limit], zero[limit];


void query()
{
		ll l,r;
	    cin >> l >> r;   
		if((xr[r]^xr[l-1]))
		{
			cout <<-1<<endl;
			return;
		}
		if((zero[r]-zero[l-1])==(r-l+1))
		{
			cout << 0 <<endl;
			return;
		}
		if((r-l+1)&1 || !d[l] || !d[r])
		{
			cout <<1<<endl;
			return;
		}
		ll val = mp[xr[l-1]];
		if((l-1)&1)
		{
			if(lower_bound(even[val].begin(), even[val].end(),l)!=even[val].end() && *lower_bound(even[val].begin(), even[val].end(), l)<=r)
			{
				cout << 2 <<endl;
			}
			else
			{
				cout <<-1<<endl;
			}
		}
		else
		{
			if(lower_bound(odd[val].begin(), odd[val].end(),l)!=odd[val].end() && *lower_bound(odd[val].begin(), odd[val].end(), l)<=r)
			{
				cout << 2 <<endl;
			}
			else
			{
				cout <<-1<<endl;
			}
		}
}

void Please_AC(ll tt)
{
    ll i,j,k;
    cin >> n >> q;
    for(i=1; i<=n; i++)   cin >> d[i];
	for(i=1,k=1; i<=n; i++)
	{
		xr[i] = xr[i-1]^d[i];
		zero[i] = zero[i-1];
		if(d[i]==0)  zero[i]++;

		if(mp[xr[i]]==0)  mp[xr[i]] = k++;
		if(i&1)
		{
			odd[mp[xr[i]]].pb(i);
		}
		else 
			even[mp[xr[i]]].pb(i);
	}
	while(q--)
	{
		query();
	}
    return ;
}


int  main()
{
    Fast
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}