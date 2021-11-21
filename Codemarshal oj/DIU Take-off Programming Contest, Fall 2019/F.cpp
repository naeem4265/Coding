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
    int i,j,n,m,ok=1;
    cin >> n;
    string s1,s2;
    cin >> s1 >> s2;
    for(i=0; i<n; i++)
    {
        if(s1[i]>='A' && s1[i]<='Z')
            s1[i] += 32;
        if(s2[i]>='A' && s2[i]<='Z')
            s2[i] += 32;
        if(s1[i]!=s2[i])
        {
            ok = 0;
            break;
        }
    }
    if(ok)
        cout <<"Case "<<t<<": vai problem solve hoy na\n";
    else
        cout <<"Case "<<t<<": table e boisha thak solve hobe\n";
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

