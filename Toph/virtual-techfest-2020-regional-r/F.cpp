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
    string s,d;
    cin >> s >> d;
    int ct[300];
    memset(ct,0,sizeof(ct));
    for(i=0; i<d.size(); i++)
        ct[d[i]]++;
    for(i=0; i<s.size(); i++)
    {
        if(ct[s[i]]>0)
        {        // cout <<ct[i]<<endl;
            cout <<"YES\n";
           return ;
        }
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
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

