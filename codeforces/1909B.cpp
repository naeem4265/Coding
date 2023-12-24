#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll a[n+5];
    set<ll> st;
    for(i=0; i<n; i++)  {
        cin >> a[i];
        st.insert(a[i]);
    }
    sort( a, a+n );
    if( st.size()==2LL  ) {
        cout << a[n-1] <<endl;
        return;
    }
    
    
    for(i=2; i<500; i++ ) {
        st.clear();

        for(j=0; j<n; j++ ) {
            st.insert( a[j]%i );
        }
        if( st.size()==2 ) {
            cout <<i<<endl;
            return;
        }
    }

    ll ans = 2;
    while( 1 ) {
        bool odd = 0;
        for(i = 0; i<n; i++ ) {
            if( a[i]&1LL )  odd = 1;
            a[i] /= 2LL;
        }
        if( odd )  {
            cout <<ans <<endl;
            return;
        }
        ans = ans*2LL;
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
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
