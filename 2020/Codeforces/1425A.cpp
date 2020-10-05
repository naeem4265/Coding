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
    ll i=1,j,n,m,k,ans=0,sum=0;
    cin >> n ;
    while(n)
    {
        if(n==4)
        {
            sum = 3;
            n = 1;
        }
        else if(n&1 || n%4==0)
        {
            sum = 1;
            n--;
        }
        else
        {
             sum = n/2;
             n /=2;
        }
        if(i&1)
            ans+=sum;
        i++;
    }
    cout << ans <<endl;
    return ;
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

