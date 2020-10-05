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
    ll i,j,n,m,k,a1,b1,c1,a2,b2,c2;
    cin >> n;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2 ;
    ll temp,ansmx=0,ansmn;
    ansmx = min(a1,b2)+min(b1,c2)+min(c1,a2);
    ansmn = n-min(a1,a2+c2)-min(b1,b2+a2)-min(c1,c2+b2);

    cout <<ansmn<<" "<<ansmx<<endl;

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

