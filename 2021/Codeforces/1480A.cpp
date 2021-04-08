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
    string s;
    cin >> s ;

    return ;
}
int  main()
{
    int t,tt=1,i;
    cin >> tt;
    string s;
    for(t=1; t<=tt; t++)
    {
        cin >> s;
        for(i=0; i<s.size(); i++)
        {
            if(i&1)
            {
                if(s[i]=='z') s[i] = 'y';
                else  s[i] = 'z';
            }
            else
            {
                if(s[i]=='a') s[i] = 'b';
                else  s[i] = 'a';
            }
        }
        cout <<s<<endl;
    }
    return 0;
}
