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
    cin >> s;
    if(n&1)
    {
        int ok=0;
        for(i=0; i<s.size(); i+=2)
            if((s[i]-'0')&1) ok=1;
        if(ok)
            cout <<1<<endl;
        else
            cout <<2<<endl;
    }
    else
    {
        int ok=0;
        for(i=1; i<s.size(); i+=2)
            if((s[i]-'0')%2==0) ok=1;
        if(ok)
            cout <<2<<endl;
        else
            cout <<1<<endl;
    }
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

