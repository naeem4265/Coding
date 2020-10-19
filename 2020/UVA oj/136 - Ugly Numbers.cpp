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


void solve(ll t)
{
    ll i,j,k;
    set<ll> st;
    st.insert(1);
    ll n;
    for(i=1; i<=1500; i++)
    {
        n = *st.begin();
        st.erase(n);   //cout <<i<<" "<<n<<endl;
        st.insert(n*2);
        st.insert(n*3);
        st.insert(n*5);
    }
    cout <<"The 1500'th ugly number is "<<n<<".\n";
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    //cin >> tt;

        solve(1);
    return 0;
}

