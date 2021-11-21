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
    ll i,j,n,m,k,a,b;
    string s;
    cin >> a >> b ;
    cin >> s;
    n = a+b;
//    a = a*2;
//    b = b*2;
    bool ok = 1;
    for(i=0; i<n; i++)
    {
        if(s[i]=='0')
        {
            a--;
            if(s[n-i-1]=='?')
            {
                s[n-i-1] = '0';
                if(i>(n-i-1))
                    a--;
            }
            if(s[n-i-1]=='1')
                ok = 0;
        }
        if(s[i]=='1')
        {
            b--;
            if(s[n-i-1]=='?')
            {
                s[n-i-1] = '1';
                if(i>(n-i-1))
                    b--;
            }
            if(s[n-i-1]=='0')
                ok = 0;
        }
    }
    for(i=0; i<n; i++)
    {
        if(s[i]=='?')
        {
            if(a>=b)
            {
                 s[i] = '0';
                 s[n-i-1] = '0';
                 a-=2;
                 if(i==(n-i-1)) a++;
            }
            else
            {
                 s[i] = '1';
                 s[n-i-1] = '1';
                 b-=2;
                 if(i==(n-i-1)) b++;
            }
        }
    }       // cout << a <<"  " << b<<endl;
    if(a<0 || b<0) ok = 0;
    if(ok==0)
    {
        cout <<-1<<endl;
        return ;
    }
    cout << s<<endl;
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
