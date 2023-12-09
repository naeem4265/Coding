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
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    cin >> s;
    for(i=1; i<n; i++)
    {
        if(s[i]<s[i-1])
            break;
    }
    if(i==n)
    {
        cout <<0<<endl;
        return ;
    }
    vector<ll> v1,v2;
    for(i=0,j=n-1; i<j; i++)
    {
        if(s[i]=='0')   continue;
        while(j>i && s[j]=='1') j--;

        if(i>=j) break;
        v1.pb(i);
        v2.pb(j);
        j--;
    }
    cout << 1 <<endl;
    cout <<v1.size()*2<<" ";
    for(i=0; i<v1.size(); i++)
        cout <<v1[i]+1<<" ";
    for(i=v2.size()-1; i>=0; i--)
        cout <<v2[i]+1<<" ";
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
