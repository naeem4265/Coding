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
string s1,s2;
void solve(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> s1 >> n;
    cin >> s2 >> m;
    n += s1.size();
    m += s2.size();
    if(n>m)
    {
        cout <<">"<<endl;
        return ;
    }
    if(n<m)
    {
        cout <<"<"<<endl;
        return ;
    }
    n = s1.size();
    m = s2.size();
    for(i=0; ; i++)
    {
        if(i>=n && i>=m)
        {
            cout <<"=\n";
            return ;
        }
        if(i>=n)
        {
            if(s2[i]=='0') continue;
            cout <<"<\n";
            return ;
        }
        else if(i>=m)
        {
            if(s1[i]=='0') continue;
            cout <<">\n";
            return ;
        }
        else if(s1[i]>s2[i])
        {
            cout <<">\n";
            return ;
        }
        else if(s2[i]>s1[i])
        {
            cout <<"<"<<endl;
            return ;
        }
    }
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
