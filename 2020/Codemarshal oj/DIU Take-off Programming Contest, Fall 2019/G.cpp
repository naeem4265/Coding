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
    int i,j,n,m,Seats = 0,Arms=0, Structure=0, Backs=0;
    cin >> m;
    m = (m+1)/2;
    string s;
    for(i=0; i<4; i++)
    {
        cin >> s >> n;
        if(s=="Seats")
            Seats = n/2;
        else if(s=="Arms")
            Arms = n/2;
        else if(s=="Structure")
            Structure = n;
        else
            Backs = n/2;
    }
    n = min(Seats,min(Arms,min(Structure,Backs)));
    if(n>=m)
        cout <<"Case "<<t<<": Carry On!\n\n";
    else
        cout <<"Case "<<t<<": Abort! Abort!\n\n";
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


