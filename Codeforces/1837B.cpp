#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll  int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k;
    cin >> n;
    string s;
    cin >> s;
    stack<char> stk;
    ll ans = 0;
    for(i=0; i<n; i++)
    {
        while(!stk.empty() && stk.top()!=s[i])
        {
            stk.pop();
        }
        stk.push(s[i]);

        if(stk.size()>ans)   ans = stk.size();
    }
    cout << ans+1 <<endl;

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

