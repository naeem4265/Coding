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
    string s,t;
    cin >> s;
    cin >> t;
    n = s.size();
    m = t.size();
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<m-1; j++)
        {
            if(s[i]==t[j] && s[i+1]==t[j+1])
            {
                cout <<"YES\n*"<<s[i]<<s[i+1]<<"*\n";
                return;
            }
        }
    }
    if(s[0]==t[0])
    {
        cout <<"YES\n"<<s[0]<<"*\n";
        return;
    }
    if(s[n-1]==t[m-1])
    {
        cout <<"YES\n*"<<s[n-1]<<"\n";
        return;
    }
    cout <<"NO\n";
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

