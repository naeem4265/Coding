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

void solve(int t)
{
    int i,j,n,m,k;
   // cin >> n ;
    string s;
    cin >> s;
    n = s.size();
    bool ok=1;
    for(i=0; i<n; i++)
    {
        if(i&1 && s[i]>='a' && s[i]<='z') ok = 0;
        else if(i%2==0 && s[i]>='A' && s[i]<='Z') ok = 0;
    }
    if(ok)
        cout <<"Yes\n";
    else
        cout <<"No\n";
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
