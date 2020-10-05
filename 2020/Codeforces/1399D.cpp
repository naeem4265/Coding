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
    int i,j,n,m,mx=0,one=0,zero=0;
    cin >> n;
    string s;
    cin >> s;
    vector<int>out;
    for(i=0; i<n; i++)
    {
        if(s[i]=='1')
        {
            one++;
            if(zero)
            {
                out.pb(zero);
                zero--;
            }
            else
                out.pb(one);
        }
        else
        {
            zero++;
            if(one)
            {
                one--;
            }
            out.pb(zero);
        }
        mx = max(mx,max(one,zero));
    }
    cout <<mx<<endl;
    for(i=0; i<n; i++)
        cout <<out[i]<<" ";
    cout <<endl;
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


