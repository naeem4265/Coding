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
    int i,j,n,p,q;
    cin >> n >> p >> q;
    string s;
    cin >> s;
    int one=0,zero=0,l=-1,r;
    for(i=0; i<n; i++)
    {
        if(s[i]=='0')
        {
            one = max(one,i-1-l);
            l = i;
        }
    }
    one = max(one,i-1-l);
    l = -1;
    for(i=0; i<n; i++)
    {
        if(s[i]=='1')
        {
            zero = max(zero,i-1-l);
            l = i;
        }
    }
    zero = max(zero,i-1-l);
    if(one>=p || zero>=q)
        cout <<"Abul Bhai is in danger\n";
    else
        cout <<"Abul Bhai is safe\n";
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

