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
    int a,k,i,j,n,mx=0,ct=1,sum=0,ans;
    string s;
    cin >> s;
    if(s[0]=='R')
    {
        if(s[1]=='R')
            if(s[2]=='R')
                ans = 3;
            else
                ans = 2;
        else
            ans = 1;
    }
    else if(s[1]=='R')
        if(s[2]=='R')
            ans = 2;
        else
            ans = 1;
    else if(s[2]=='R')
        ans=1;
    else
        ans=0;
    cout <<ans<<endl;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}

