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
    cin >> s ;
    n = s.size();
    j = 0;
    ll n1 = 0;
    while(j<n && s[j]>='0' && s[j]<='9')
    {
        n1 = (n1*10+s[j]-'0')%Mod;
        j++;
    }
    for(i = j; i<n; i=j)
    {
        j = i+1;
        char sign = s[i];
        ll n2 = 0;
        while(j<n && s[j]>='0' && s[j]<='9')
        {
            n2 = (n2*10+s[j]-'0')%Mod;
            j++;
        }      //cout <<n1<<" "<<n2<<" "<<sign<<endl;
        if(sign=='+')
        {
            n1 = (n1+n2)%Mod;
        }
        else if(sign=='-')
        {
            n1 = (n1-n2+Mod)%Mod;
        }
        else
        {
            n1 = (n1*n2)%Mod;
        }
    }
    cout <<"case #"<<t<<": ";
    cout << n1 <<endl;
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
