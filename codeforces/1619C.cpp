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
    ll i,j,n,m,k,x,q;
    string s, t, a, b="" ;
    cin >> a >> s;
    n = a.size();
    m = s.size();

    for(i=n-1,j=m-1; i>=0; i--,j--)
    {
        x = a[i]-'0';
        k = s[j]-'0';
        if(a[i]>s[j])
        {
            j--;
            if(j<0 || s[j]!='1')
            {
                cout <<"-1\n";
                return ;
            }
            k += (s[j]-'0')*10LL;
        }
        char ch;
        ch = ('0'+(k-x));
        b += ch;
    }
    while(j>=0)
    {
        b += s[j];
        j--;
    }
    reverse(b.begin(),b.end());
    for(i=0; i<b.size(); i++)
        if(b[i]!='0') break;
    for( ; i<b.size(); i++)
        cout <<b[i];
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
