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
    int a,k,i,j,n,mx=0,ct1=0,ct2=0,sum=0;
    string s;
    cin >> s;
    for(i=0; i<s.size()-1; i++)
    {
        if(s[i]=='A'&&s[i+1]=='B' && !ct1)
        {
            i++;
            ct1=1;
        }
        else if(s[i]=='B'&&s[i+1]=='A')
        {
            i++;
            ct2=1;
        }
    }
    if(ct1 && ct2)
    {
        cout <<"YES\n";
        return ;
    }
    ct1=0;ct2=0;
    for(i=s.size()-1; i>0; i--)
    {
        if(s[i]=='A'&&s[i+1]=='B' && !ct1)
        {
            i--;
            ct1=1;
        }
        else if(s[i]=='B'&&s[i+1]=='A')
        {
            i--;
            ct2=1;
        }
    }
    if(ct1 && ct2)
    {
        cout <<"YES\n";
        return ;
    }

    cout <<"NO\n";
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
 //   cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}


