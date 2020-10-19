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
    int i,j,n,m,k,x=0,y=0;
    string s1,s2;
    cin >> s1 >> s2;
    for(i=s1.size()-1; i>=0; i--)
    {
        if(s1[i]>='0' && s1[i]<='9')
            x += s1[i]-'0';
    }
    for(i=s2.size()-1; i>=0; i--)
    {
        if(s2[i]>='0' && s2[i]<='9')
            y += s2[i]-'0';
    }
    int d[3];
    d[0] = x+y;
    d[1] = abs(x-y);
    d[2] = abs(x*y);
    sort(d,d+3);
    cout <<"\""<<d[1]<<"\"\n";
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

