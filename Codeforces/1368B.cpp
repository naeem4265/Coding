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

ll bigmod(ll b,ll p)
{
    ll res=1;
    while(p)
    {
        if(p&1) res = res*b;
        b = b*b;
        p = p/2;
    }
    return res;
}

void solve(int t)
{
    ll i,j,n=1,m,k;
    string s="codeforces";
    cin >> k ;
    if(k==1)
    {
        cout <<s<<endl;
        return ;
    }
    while(bigmod(n,10)<k) n++;
                               //cout <<n<<" "<<bigmod(n,10)<<endl;
    for(i=1; i<=10; i++)
    {
        for(j=0; j<n; j++)
            cout <<s[i-1];
        if((bigmod(n,i)*bigmod((n-1),10-i))>=k) n--;
    }
    cout <<endl;
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

