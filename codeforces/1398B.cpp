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
    int a,k,i,j,n,mx=0,ct=0,sum=0;
    string s;
    cin >> s;
    int sz=s.size();
    vector<int>out;
    for(i=0; i<sz; i++)
    {
        if(s[i]=='1')
        {
            for(j=i; j<sz; j++)
                if(s[j]=='0')
                    break;
            out.pb(j-i);
            i = j;
        }
    }
    sort(out.begin(),out.end());
    for(i=out.size()-1; i>=0; i-=2)
        sum += out[i];
    for(i=out.size()-2; i>=0; i-=2)
        ct+=out[i];
    cout <<max(ct,sum)<<endl;
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

