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
#define limit 200008
using namespace std;
ll l[limit],r[limit];
void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll a[n+5];
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(i=n-1; i>=0; i--)
    {
        l[a[i]] = i;
    }
    for(i=0; i<n; i++)
    {
        r[a[i]] = i;
    }

    ll ans = 0;
    priority_queue<ll> st;
    for(i=0,k=0; i<n; i++)
    {
        if(l[a[i]]==r[a[i]])
            continue;

        if(st.empty() || st.top()<=l[a[i]])
        {
            ans += r[a[i]]-l[a[i]]-1;
            st.push(r[a[i]]);
        }
             //cout <<i<<" "<<st.top()<<" "<<a[i]<<" "<<r[a[i]]<<" "<<l[a[i]]<<" "<<ans<<endl;
        ll x = st.top();
        ll mx = 0;
        for(j=x-1; j>k; j--)
        {
            mx = max(mx, r[a[j]]);
        }
        k = st.top();
        if(mx<=st.top()+1)   continue;
        ans += mx-st.top()-1;
        st.push(mx);
    }
    cout << ans <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
