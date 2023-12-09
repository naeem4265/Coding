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


void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll d[n+5];
    for(i=0; i<n; i++)
    {
        cin  >> d[i];
    }

    j = 0;
    while(j<n && d[j]<=0)
    {
        j++;
    }
    ll sum = 0;
    set<ll> st;

    for(i=j; i<n; )
    {
        sum += d[i];
        st.insert(-d[i]);

        j = i+1;
        while(j<n && d[j]<=0)
        {
            sum += d[j];
            j++;
        }
        if(j<n)
        {    //
            st.insert(-d[j]);
            ll x = *st.begin();  //cout <<x<<endl;cout <<i<<" "<<j<<" "<<sum<<endl;
            if((sum+d[j])> -x)
            {
                cout <<"NO\n";
                return ;
            }
            if(sum<=0)
            {
                st.clear();
                sum = 0;
            }
        }
        i = j;
    }


    j = n-1;
    while(j>=0 && d[j]<=0)
    {
        j--;
    }
    sum = 0;
    st.clear();
    for(i=j; i>=0; )
    {
        sum += d[i];
        st.insert(-d[i]);

        j = i-1;
        while(j>=0 && d[j]<=0)
        {
            sum += d[j];
            j--;
        }
        if(j>=0)
        {    //
            st.insert(-d[j]);
            ll x = *st.begin();  //cout <<x<<endl;cout <<i<<" "<<j<<" "<<sum<<endl;
            if((sum+d[j])> -x)
            {
                cout <<"NO\n";
                return ;
            }
            if(sum<=0)
            {
                st.clear();
                sum = 0;
            }
        }
        i = j;
    }

    cout <<"YES\n";
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
        solve(t);
    return 0;
}
