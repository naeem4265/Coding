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
    cin >> s;
    int op1=0,op2=0,ct=0;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='(') op1++;
        else if(s[i]==')')
        {
            if(op1)
            {
                op1--;
                ct++;
            }
        }
        else if(s[i]=='[') op2++;
        else if(s[i]==']')
        {
            if(op2)
            {
                op2--;
                ct++;
            }
        }
    }
    cout <<ct<<endl;
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

