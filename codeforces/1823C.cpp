#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e7+5;
const ll Mod = 1e9+7;
using namespace std;
ll cnt[limit];
set<ll> st;

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    st.clear();

    ll d[n+5];
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        m = d[i];
        for(j=2; j*j<=m; j++)
        {
            while(m%j==0)
            {
                st.insert(j);
                m /= j;
                cnt[j]++;
            }
        }
        if(m>1)
        {
            st.insert(m);
            cnt[m]++;
        }
    }
    ll ans = 0;
    for(ll u: st)
    {
        m = cnt[u]/2;
        ans += m;
        cnt[u] -= m*2;   //cout <<u<<" "<<m<<" "<<cnt[u]<<" "<<ans<<endl;
    }
    ll ct = 0;
    for(ll u: st)
    {
        if(cnt[u])   ct++;
        if(ct==3)
        {
            ans++;
            ct = 0;
        }
        cnt[u] = 0;
    }
    cout << ans <<endl;


    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

