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
    for(i=0; i<n; i++)
    {
        s += '*';
    }
    char ch;
    cout <<"? 1 "<<1<<endl;
    cin >> ch;
    s[0] = ch;

    ll last[30];
    memset(last, 0, sizeof(last));
    last[s[0]-'a'] = 1;
    ll pre[n+5], dif = 1;
    pre[1] = 1;
    for(i=2; i<=n; i++)
    {
        cout <<"? 2 "<<1<<" "<<i<<endl;
        cin >> dif;
        pre[i] = dif;
        if(dif>pre[i-1])
        {
            cout <<"? 1 "<<i<<endl;
            cin >> ch;
            s[i-1] = ch;
            last[ch-'a'] = i;
        }
        else
        {
            vector<ll> v;
            for(j=0; j<26; j++)
            {
                if(last[j])  v.pb(last[j]);
            }
            sort(v.begin(), v.end());
            ll l=0, h = v.size()-1,mid,idx=i-1;
            while(l<=h)
            {
                mid = (l+h)/2;
                cout <<"? 2 "<<v[mid]<<" "<<i<<endl;
                cin >> dif;
                set<char> st;
                for(j=v[mid]; j<i; j++)
                {
                    st.insert(s[j-1]);
                }
                if(st.size()==dif)
                {
                    l = mid+1;
                    idx = v[mid];
                }
                else
                {
                    h = mid-1;
                }

            }
            s[i-1] = s[idx-1];
            last[s[i-1]-'a'] = i;
        }
    }

    cout <<"! "<<s<<endl;
    fflush(stdout);
    return ;
}


int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
