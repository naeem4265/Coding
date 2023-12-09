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
    ll i,j,n,m,k,d,p=1;
    string s;
    cin >> n ;
    ll num1=0,num2=0;
    while(n>1LL)
    {
        d = n%2LL;
        n /= 2LL;
        num2 += p;
        if(d==0)
            num1 += p;
        p *= 2LL;
    }
    num1 += p;
    cout << num1*num2 <<endl;
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
