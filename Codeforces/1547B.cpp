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

vector<string> v;



void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> s;

    n = s.size()-1;
    char ch = 'a'+n;
    for(i=0,j=n,k=n; k>=0;k-- )
    {     //cout <<i<<" "<<j<<" "<<k<<" "<<ch<<endl;
        if(s[i]>ch || s[j]>ch)
        {
            cout <<"NO\n";
            return ;
        }
        if(s[i]==ch)
        {
            ch--;
            i++;
        }
        else if(s[j]==ch)
        {
            ch--;
            j--;
        }
        else
        {
            cout <<"NO\n";
            return ;
        }

    }
    cout <<"YES\n";
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tt,t;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
