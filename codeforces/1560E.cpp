#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll tt)
{
    ll i,j,n,m,k;
    string s,t;
    cin >> t;

    ll sz=t.size();
    ll ct[28];
    memset(ct,0,sizeof(ct));
    vector<char> v;

    for(i=sz-1; i>=0; i--)
    {
        if(ct[t[i]-'a']==0)
            v.pb(t[i]);
        ct[t[i]-'a']++;
    }
    reverse(v.begin(),v.end());
    m = v.size();

    ll temp[28];
    memset(temp,0,sizeof(temp));

    for(i=0; i<m; i++)
    {
        ll x = ct[v[i]-'a'],y = i+1;
        if(x%y)
        {
            cout <<-1<<endl;
            return ;
        }
        temp[v[i]-'a'] = ct[v[i]-'a']/(i+1);
    }

    s="";

    for(i=0; i<sz; i++)
    {
        if(temp[t[i]-'a'])
        {
            s += t[i];
            temp[t[i]-'a']--;
        }
    }

    string p=s,q,pp=s;
    k = 0;

    for(i=0; i<m; i++)
    {
        n = s.size();
        q = "";
        for(j=0; j<n; j++)
        {
            if(v[i]!=s[j])
            {
                q += s[j];
            }
        }
        pp += q;
        s = q;
    }
    if(pp!=t)
    {
        cout <<-1<<endl;
        return ;
    }
    cout <<p;
    cout <<" ";
    for(i=0; i<m; i++)
        cout <<v[i];
    cout <<endl;


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
