#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;

bool check(string s[], char ch)
{
    ll i,j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(s[i][j] != ch)  break;
        }
        if(j==3)   return 1;
        for(j=0; j<3; j++)
        {
            if(s[j][i] != ch)  break;
        }
        if(j==3)   return 1;
    }
    if(s[1][1]==ch && ((s[0][0]==ch && s[2][2]==ch)||(s[0][2]==ch && s[2][0]==ch)))   return 1;
    return 0;
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s[3];
    for(i=0; i<3; i++)   cin >> s[i];
    if(check(s, 'X'))
    {
        cout <<"X\n";
        return;
    }
    if(check(s, '+'))
    {
        cout <<"+\n";
        return;
    }
    if(check(s, 'O'))
    {
        cout <<"O\n";
        return;
    }
    cout << "DRAW\n";

    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
