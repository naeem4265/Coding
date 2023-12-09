#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll tc)
{
    ll i,j,n,m,k;
    cin >>m >> n ;
    ll A[n+5];
    for(i=0; i<n; i++)
        cin >> A[i];
    sort(A,A+n);
    if(A[0]>0 || A[n-1]<0)
    {
        cout <<0<<endl;
        return ;
    }
    set<ll>st;
    for(i=0; i<n; i++)
        st.insert(A[i]);
    n = st.size();
    m = n/2;
    ll ans = m*m;
    if(n&1) ans += m;
    cout <<ans<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
    cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

