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

void solve(ll tc)
{
    ll i,j,n,m,k;
    cin >> n ;
    string s;
    cin >> s;
    cout <<1;
    ll pre;
    if(s[0]=='1') pre = 2;
    else pre = 1;
    for(i=1; i<n; i++)
    {
        if(pre==1)
        {
            if(s[i]=='1')
            {
                cout <<1;
                pre = 2;
            }
            else
            {
                cout <<0;
                pre = 0;
            }
        }
        else if(pre==0)
        {
            if(s[i]=='1')
            {
                cout <<1;
                pre = 2;
            }
            else
            {
                cout <<1;
                pre = 1;
            }
        }
        else
        {
            if(s[i]=='1')
            {
                cout <<0;
                pre = 1;
            }
            else
            {
                cout <<1;
                pre = 1;
            }
        }
    }
    cout <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
    cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

