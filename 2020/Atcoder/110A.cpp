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
    ll i,j,n,m,k;
    cin >> n ;
    ll pr[32];
    for(i=0; i<32; i++) pr[i]=1;

    for(i=n; i>1; i--)
    {
        m = i;
        for(j=2; j*j<=i; j++)
        {
            ll ct=1;
            while(m%j==0)
            {
                ct *= j;
                m /= j;
            }
            pr[j] = max(pr[j],ct);
        }
        if(m>1)
        {
            pr[m] = max(pr[m],m);
        }            //cout <<i<<" "<<sum <<endl;
    }
    ll sum=1;
    for(i=1; i<=30; i++)
    {
        sum *= pr[i];
    }
    cout <<sum+1<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
  //  cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

