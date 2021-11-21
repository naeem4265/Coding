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

void solve(ll t)
{
    ll i,j,n,m,a;
    string s;
    cin >> n;
    pair<ll,ll> pr[n+5];
    for(i=1; i<=n; i++)
    {
        cin >> a;
        pr[i-1].first = a;
        pr[i-1].second = i;
    }
    sort(pr,pr+n);
    cin >> s;
    stack<ll> stk;
    for(i=0,j=0; i<2*n; i++)
    {
        if(s[i]=='0')
        {          // cout <<endl<<j<<" "<<pr[j].first<<" "<<pr[j].second<<endl;
            stk.push(pr[j].second);
            j++;
            cout << stk.top();
        }
        else
        {
            cout << stk.top() ;
            stk.pop();
        }
        if(i!=2*n)
            cout<<" ";
    }
    cout << endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
