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
    int zero=0,one=0,ans=0,c0=0,c1=0,h;
    cin >> n >> c0 >> c1 >> h;
    string s;
    cin >> s;
    for(i=0; i<n; i++)
    {
        if(s[i]=='0') zero++;
        else one++;
    }
    if(c0<=c1)
    {
        if(c0+h<=c1)
            ans = n*c0+h*one;
        else
            ans = c0*zero+c1*one;
    }
    else
    {
        if(c1+h<=c0)
            ans = n*c1+zero*h;
        else
            ans = c0*zero+c1*one;
    }
    cout <<ans<<endl;
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

