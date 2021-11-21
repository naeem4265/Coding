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
    string s,s2;
    s2="microsoft";
    cin >> s;
    for(i=0; i<s2.size(); i++)
    {
        for(j=0; j<s.size(); j++)
        {    //cout <<s2[i]<<" "<<s[j]<<endl;
            if(s2[i]==s[j])
            {
                break;
            }
        }
        if(j==s.size())
        {    //cout <<i<<" "<<j<<endl;
            cout <<"Only I love Microsoft!\n";
            return ;
        }
    }
    cout <<"We both love Microsoft!\n";
    return ;
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

