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
    int i,j,n,m;
    cin >> n;
    string s;
    int fre[30];
    for(i=0; i<30; i++) fre[i]=0;
    for(i=0; i<n; i++)
    {
        cin >> s;
        for(j=s.size()-1; j>=0; j--)
            fre[s[j]-'a']++;
    }
    for(i=0; i<27; i++)
    {
        if(fre[i] && fre[i]%n)
        {
            cout <<"NO\n";
            return;
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
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}

