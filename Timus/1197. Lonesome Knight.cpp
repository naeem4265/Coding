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
    string s;
    cin >> s ;
    int ans;
    if(s[0]=='a' || s[0]=='h')
    {
        if(s[1]=='1'||s[1]=='8')
            ans=2;
        else if(s[1]=='2'||s[1]=='7')
            ans=3;
        else
            ans=4;
    }
    else if(s[0]=='b' || s[0]=='g')
    {
        if(s[1]=='1'||s[1]=='8')
            ans=3;
        else if(s[1]=='2'||s[1]=='7')
            ans=4;
        else
            ans=6;
    }
    else
    {
        if(s[1]=='1'||s[1]=='8')
            ans=4;
        else if(s[1]=='2'||s[1]=='7')
            ans=6;
        else
            ans=8;
    }
    cout  <<ans<<endl;
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
//Accepted
