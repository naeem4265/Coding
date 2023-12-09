#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,d,zero = 0;
    string s;
    cin >> n;
    set<ll> st,st2;
    set<ll>:: iterator it;
    for(i=0; i<n; i++)
    {
        cin >> d;
        st.insert(d);
    }
    while(1)
    {
        m = st.size();
        if(m==1)
        {
            if(n>2)
                cout <<0<<endl;
            else
                cout <<*st.begin()<<endl;
            return ;
        }

        zero += (n-1-m);
        n = m;
        it = st.begin();
        st2.clear();
        for(i=1; i<m; i++)
        {
            ll d1 = *it;
            it++;
            ll d2 = *it;
            st2.insert(d2-d1);  cout <<d1<<" "<<d2<<endl;
        }
        st.clear();   cout <<m<<" size "<<endl;
        st = st2;
        zero = max(0,zero-1);
        if(zero) st2.insert(0);
    }

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
