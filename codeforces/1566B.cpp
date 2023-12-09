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
    ll i,j,n,m,k;
    string s;
    cin >> s;
    n = s.size();
    ll ct=0;
    for(i=0; i<n; i++)
    {
        if(s[i]=='0') break;
    }
    for(j=n-1; j>=i; j--)
    {
        if(s[j]=='0') break;
    }
    if(i>=j)
    {
        sort(s.begin(),s.end());
        if(s[n-1]==s[0] && s[n-1]=='1')
            cout <<0<<endl;
        else
            cout <<1<<endl;
        return ;
    }
    for(k=i+1; k<j; k++)
    {
        if(s[k]=='1') break;
    }
    if(k>=j)
    {
        cout <<1<<endl;
        return ;
    }
    cout <<2<<endl;


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
