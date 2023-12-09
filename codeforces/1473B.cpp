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

void solve(ll tc)
{
    ll i=0,j=0,n,m,k;
    string s,t;
    cin >> s >> t;
    if(t.size()>s.size())
    {
        string temp;
        temp = t;
        t = s;
        s = temp;
    }
    vector<char>v;
    n = s.size();
    m = t.size();
    for(k=0; k<n; k++)
        v.pb(s[k]);
    i = 0;
    j = 0;
    for(; ; i++,j++)
    {       //cout <<i<<" "<<j<<endl;
            if(i==n)
            {
                for(k=0; k<n; k++)
                    v.pb(s[k]);
                i = 0;
            }
            if(j==m)
                j = 0;
            if(s[i]!=t[j])
            {
                cout <<"-1\n";
                return ;
            }
            if(i==(n-1) && j==(m-1))
            {
                for(k=0; k<v.size(); k++)
                    cout <<v[k];
                cout <<endl;
                return ;
            }
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
    cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

