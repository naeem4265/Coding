#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 200008
using namespace std;
bool vis[limit];

void solve(ll t)
{
    ll i,j,n,m,k;
    cin >> n ;
    ll D,sum=0;
    ll ans=0;
    set<ll>st;
    st.insert(0);
    for(i=1; i<=n; i++)
    {
        cin >> D ;
        sum=sum+D;
        if(st.find(sum)!=st.end())
        {
            ans++;
            st.clear();
            st.insert(0);
            sum = D;
        }
        st.insert(sum);
    }
    cout <<ans<<endl;
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
  //  cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

