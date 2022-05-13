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
    cin >> s;
    n = s.size();
    if(n<3)
    {
        cout <<"YES\n";
        return ;
    }
    bool ok=1,okk=1;
    set<char> st,st2;
    if(s[0]==s[1])  ok = 0;
    st.insert(s[0]);
    st.insert(s[1]);
    for(i=2; i<n; i++)
    {
        st.insert(s[i]);
        if(s[i]==s[i-1]) ok = 0;
        if(s[i-2]==s[i])  okk = 0;
    }
    if((ok==0 && st.size()>=2) || (okk==0 && st.size()>2))
    {
        cout <<"NO\n";
        return;
    }

    ll ct[30];

    memset(ct, 0, sizeof(ct));
    for(i=0; i<n; i++)
    {
        ct[s[i]-'a']++;
        st2.insert(s[i]);
        if(ct[s[i]-'a']>1 && st2.size()!=st.size())
        {
            cout <<"NO\n";
            return ;
        }
    }
    st2.clear();
    memset(ct, 0, sizeof(ct));
    for(i=n-1; i>=0; i--)
    {
        ct[s[i]-'a']++;
        st2.insert(s[i]);
        if(ct[s[i]-'a']>1 && st2.size()!=st.size())
        {
            cout <<"NO\n";
            return ;
        }
    }
    cout <<"YES\n";


    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
