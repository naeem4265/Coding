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
    int i,j,n,m,k;
    cin >> n >> k;
    string s;
    cin >> s;
    for(i=0; i<k; i++)
    {
        int l,r,ok=0;
        cin >> l >> r;
        l--; r--;
        for(j=0; j<l; j++)
        {
            if(s[j]==s[l])
            {
                ok = 1;
                break;
            }
        }
        for(j=r+1; j<n; j++)
        {
            if(s[j]==s[r])
            {
                ok=1;
                break;
            }
        }
        if(ok)
        {
            cout <<"yes\n";
        }
        else
            cout <<"no\n";
    }
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

