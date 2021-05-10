#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll t)
{
    ll i,j,n,m,k,q;
    //scanf("%d %d", &n, &q);
    cin >> n >> q;

    vector<ll> vec;
    ll sz = 0;

    ll sum[n+5];
    memset(sum,0,sizeof(0));

    while(q--)
    {
        //scanf("%d", &k);
        cin >> k;
        ll ans=Mod,l=1,r=n;
        for(i=0; i<sz; i++)
        {
            m = vec[i];
            ll zero = m-sum[m];
            if(zero >= k)
            {
                ans = min(ans,m);
                r = min(r,m-1);
            }
            else
            {
                l = max(l,m+1);
            }
        }
        while(l<=r)
        {
            m = (l+r)/2;
            //printf("? 1 %d\n", m);
            cout <<"? 1 "<<m<<endl;
            ll temp;
            //scanf("%d", &temp);
            cin >> temp;
            vec.pb(m);
            sz++;
            sum[m] = temp;
            ll zero = m-sum[m];
            if(zero >= k)
            {
                ans = m;
                r = m-1;
            }
            else
                l = m+1;
        }
        //printf("! %d\n",ans);
        cout <<"! "<<ans<<endl;
        for(i=0; i<sz; i++)
        {
            m = vec[i];
            if(m>=ans)
            {
                sum[m]++;
            }
        }
    }
    cout.flush();
    return ;
}

int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
