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
    int n,q,i,j,x1,y1,x2,y2;
    int D=0,U=0,L=0,R=0,u,d,l,r;
    string s;
    cin >> s;
    n= s.size();
    for(i=0; i<n; i++)
    {
        if(s[i]=='D')
            D++;
        if(s[i]=='U')
            U++;
        if(s[i]=='R')
            R++;
        if(s[i]=='L')
            L++;
    }
    cin >> x1>> y1;
    cin >>q;
    while(q--)
    {
        cin >> x2 >> y2;
        r = max(0,x2-x1);
        l = max(0,x1-x2);
        u = max(0,y2-y1);
        d = max(0,y1-y2);
        if(r>R || l>L || u>U|| d>D)
        {
            cout<<"NO\n";
            continue;
        }
        else
        {
            cout<<"YES "<<r+l+u+d<<endl;
        }
    }
    return;
}
int  main()
{
    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}


