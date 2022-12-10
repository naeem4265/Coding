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
    cin >> s;
    n = s.size();
    cin >> k;
    vector<char> v;
    ll len = 0;
    for(i=0; i<n; i++)
    {
        if(len &&  len<=k && v[0]>s[i] && s[i]!='0')
        {
            while(len)
            {
                v.pop_back();
                k--;
                len--;
            }
        }
        while(k && len && v[len-1]>s[i])
        {
            if(s[i]=='0' && len==1)   break;
            v.pop_back();
            k--;
            len--;
        }
        v.push_back(s[i]);
        len++;
    }
    while(k--)
    {
        v.pop_back();
        len--;
    }
    for(i=0; i<len; i++)
        cout << v[i] ;
    cout << endl;


    return ;
}


int  main()
{
    Fast
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

