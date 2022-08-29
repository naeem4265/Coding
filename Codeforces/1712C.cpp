#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll d[n+5];
    ll cnt[n+5];
    ll last[n+5];
    set<ll> st;
    memset(cnt, 0, sizeof(cnt));

    for(i=0; i<n; i++)
    {
        cin >> d[i];
        st.insert(d[i]);
        last[i] = st.size();
        cnt[d[i]]++;
    }
    ll ans = 0;
    j=n-1;
    for(i=n-1; i>0; i--)
    {
        cnt[d[i]]--;
        while(j>=i && cnt[d[j]]==0)
        {
            j--;
        }
        if(d[i]<d[i-1])
        {
            cout <<last[j]<<endl;
            return ;
        }
    }
    cout <<0<<endl;
    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
