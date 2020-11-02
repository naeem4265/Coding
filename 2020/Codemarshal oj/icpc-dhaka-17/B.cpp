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
    int i,j,n,m,k,sz;
    string s;
    getline(cin,s);
    n = s.size();
    vector<char>ch;
    vector<int>out;
    char last;
    ch.pb(s[n-1]);
    out.pb(0);
    out.pb(0);
    for(i=n-2; i>=0; i--)
    {
        last='*';
        sz = ch.size();
        if(sz)
            last = ch[sz-1];
        if((last=='>' && s[i]=='<')||(last==')' && s[i]=='(')||(last=='}' && s[i]=='{') || (last==']'&&s[i]=='['))
        {
            sz = out.size();
            m = out[sz-1];              // cout <<m<<" hre ";
            m += out[sz-2-m];         // cout <<m<<endl;
            out.pb(m+2);
            ch.pop_back();
        }
        else
        {
            out.pb(0);
            ch.pb(s[i]);
        }
    }
    printf("Case %d:\n",t);
    for(i=n; i>0; i--)
        printf("%d\n",out[i]);
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    scanf("%d",&tt);
    getchar();
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

