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

void solve(int t)
{
    ll i,j,n,m,k;
    scanf("%lld %lld",&n,&k);
    ll D[n+5];
    for(i=0; i<n; i++)
    {
        scanf("%lld",&D[i]);
    }
    for(i=0; i<k; i++)
    {
        sum += D[i];
        st.insert(D[i]);
    }
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    int t,tt=1;
    scanf("%d",&tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

