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
    string s1, s2;
    cin >> s1 >> s2;
    n = s1.size();
    m = s2.size();
    ll ans = 0;
    if(n != m){
        ans = (m-1)*9LL;
        ans += s2[0]-'0';
        cout << ans <<endl;
        return;
    }
    for(i=0; i<n; i++)
    {
        if(s1[i] != s2[i])
        {
            ans += (s2[i]-s1[i]);
            ans += (n-i-1)*9LL;
            cout <<ans <<endl;
            return;
        }
    }
    cout <<0<<endl;


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
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
