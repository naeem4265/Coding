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

void solve(ll t)
{
    ll i,j,n,m,k;
    string s1,s2;
    cin >> s1 >> s2;
    if(s1[0]=='0' && s2[0]=='0')
    {
        cout <<-1<<endl;
        return;
    }
    if(s1[0]=='0' || s2[0]=='0' || (s1[0]=='-' && s2[0]!='-'))
    {
        cout <<0<<endl;
        return;
    }
    n = ((s1[s1.size()-1]-'0')&1);
    m = ((s2[s2.size()-1]-'0')&1);
    if(m ^ n && s1[0]=='-' && s2[0]=='-')
    {
        cout <<0<<endl;
        return;
    }
    cout <<1<<endl;
        return;

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
