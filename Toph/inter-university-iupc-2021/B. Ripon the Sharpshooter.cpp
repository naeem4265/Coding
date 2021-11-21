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
vector<ll> B;

ll rec(vector<ll>A,ll n)
{            cout <<n<<endl;  for(ll j=0; j<A.size(); j++) cout <<A[j]<<" "; cout <<endl;
    if(n==2)
        return max(A[1],A[2]);
    if(n==1)
        return A[1];
    ll ans = 0;

    for(ll i=1; i<=n; i++)
    {
        B.clear();
        B.pb(A[0]);
        ll sum = 0;
        for(ll j=1; j<=n; j++)
        {
            if(i==j)
            {
                sum += (A[i-1]*A[i+1]);
            }
            B.pb(A[j]);
        }
        B.pb(A[n+1]);   cout <<n<<endl;  for(ll j=0; j<B.size(); j++) cout <<B[j]<<" "; cout <<endl;
        sum += rec(B,n-1);
        ans = max(ans,sum); // cout <<n<<" "<<i<<" "<<sum<<" "<<ans<<endl;
    }
    return ans;
}

void solve(ll n)
{
    ll i,j,m,k;
    vector<ll> A;
    A.pb(1);
    for(i=0; i<n; i++)
    {
        cin >> m;
        A.pb(m);
    }
    A.pb(1);

    cout << rec (A,n)<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1,n;
    //cin >> tt;
    while(cin >> n)
    {
        solve(n);
    }
    return 0;
}
