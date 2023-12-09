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
    cin >> n ;
    cin >> s;
    ll a1=0,a0=0,b1=0,b0=0,zero=0,one=0;

    for(i=0; i<n; i++)
    {
        if(s[i]=='1') one++;
        else zero++;
    }

    vector<char> A,B;
    for(i=0; i<n-1; i++)
    {

        if(s[i]=='1')
        {
            if(a1==0 || (s[i+1]=='0' && max(a1,b1)<=1))
            {
                a1++;
                b1++;
                A.pb('(');
                B.pb('(');
            }
            else if(a1 && b1)
            {
                a1--;
                b1--;
                A.pb(')');
                B.pb(')');
            }
            else
            {
                a1++;
                b1++;
                A.pb('(');
                B.pb('(');
            }
        }
        else
        {
            if(a1==0)
            {
                a1++;
                b1--;
                A.pb('(');
                B.pb(')');
            }
            else if(b1==0)
            {
                a1--;
                b1++;
                A.pb(')');
                B.pb('(');
            }
            else if(a1>=b1)
            {
                a1--;
                b1++;
                A.pb(')');
                B.pb('(');
            }
            else
            {
                a1++;
                b1--;
                A.pb('(');
                B.pb(')');
            }
        }
        if(b1<0) b1 = -Mod;      // cout <<a1<<" "<<b1<<" "<<i<<endl;
    }
    b1--;
    a1--;
    A.pb(')');
    B.pb(')');
    if(a1 || b1 || s[0] == '0' || s[n-1]=='0' || one&1 || zero&1)
    {
        cout <<"NO\n";
        return ;
    }
    else
    {
        cout <<"YES\n";
        for(i=0; i<n; i++)
            cout <<A[i];
        cout <<endl;
        for(i=0; i<n; i++)
            cout <<B[i];
        cout <<endl;
    }
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
