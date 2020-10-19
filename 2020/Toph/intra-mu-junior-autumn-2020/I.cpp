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
    string s[4];
    for(i=0; i<4; i++)
        cin >> s[i];
    for(i=0; i<4; i++)
    {
        int one=0,two=0,three=0,four=0;
        for(j=0; j<4; j++)
        {
            if(s[i][j]=='1')
                one=1;
            if(s[i][j]=='2')
                two=1;
            if(s[i][j]=='3')
                three=1;
            if(s[i][j]=='4')
                four=1;
        }
        for(j=0; j<4; j++)
        {
            if(s[i][j]=='*' && (one+two+three+four)==3)
                s[i][j] = (!one?'1':!two?'2':!three?'3':'4');
        }
        one=0,two=0,three=0,four=0;
        for(j=0; j<4; j++)
        {
            if(s[j][i]=='1')
                one=1;
            if(s[j][i]=='2')
                two=1;
            if(s[j][i]=='3')
                three=1;
            if(s[j][i]=='4')
                four=1;
        }
        for(j=0; j<4; j++)
        {
            if(s[j][i]=='*' && (one+two+three+four)==3)
                s[j][i] = (!one?'1':!two?'2':!three?'3':'4');
        }
    }
    for(i=0; i<4; i++) cout <<s[i]<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
  //  cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

