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

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n >> k;
    cin >> s;
    ll ct = 0;
    for(i=0; i<n; i++)
    {
        if(s[i]=='*')
        {
            ct++;
            break;
        }
    }
    for(j=n-1; j>i; j--)
    {
        if(s[j]=='*')
        {
            ct++;
            break;
        }
    }

    for(i = i+k; i<j; i+=k)
    {
        while(s[i]!='*') i--;
        ct++;
    }
    if(i!=j && i<j) ct++;

    cout <<ct<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
