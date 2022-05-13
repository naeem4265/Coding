#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll tt)
{
    ll i,j,n,m,k,q;

    scanf("%d",&n);
    ll a[n+5],ct[n+5];
    memset(ct,0,sizeof(ct));
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        ct[a[i]]++;
    }
    m = n+1;
    vector<ll> ans;
    set<ll> st;
    for(i=0,k=0; k<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(ct[j]==0)
            {
                ans.pb(j);
                m = j+1;
                st.clear();
                for(; k<n; )
                {
                    if(a[k]<j)
                        st.insert(a[k]);
                    ct[a[k]]--;
                    k++;
                    if(st.size()==j)
                        break;
                }
            }
        }
    }
    printf("%d\n", ans.size());
    n = ans.size();
    for(i=0; i<n; i++)
        printf("%d ",ans[i]);
    if(n)
        printf("\n");
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    scanf("%d", &tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
