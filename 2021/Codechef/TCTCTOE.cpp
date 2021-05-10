#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;
string s[4];

ll ct[4][4];

ll row(ll r)
{
    if(s[r][0]==s[r][1] && s[r][1]==s[r][2] && s[r][0]!='_')
    {
        ct[r][0]++; ct[r][1]++; ct[r][2]++;
        return 1;
    }
}
ll col(ll c)
{
    if(s[0][c]==s[1][c] && s[1][c]==s[2][c] && s[0][c]!='_')
    {
        ct[0][c]++; ct[1][c]++; ct[2][c]++;
        return 1;
    }
}
ll dia()
{
    ll x=0;
    if(s[0][0]==s[1][1] && s[1][1]==s[2][2] && s[1][1]!='_')
    {
        ct[0][0]++; ct[1][1]++; ct[2][2]++;
        x++;
    }
    if(s[0][2]==s[1][1] && s[1][1]==s[2][0] && s[1][1]!='_')
    {
        ct[0][2]++; ct[1][1]++; ct[2][0]++;
        x++;
    }
    return x;
}

void solve(ll t)
{
    ll i,j,n,m,k;
    ll ace = 0;
    for(i=0; i<3; i++)
    {
        cin >> s[i];
        for(j=0; j<3; j++)
        {
            if(s[i][j]=='_')
                ace++;
        }
    }
    memset(ct,0,sizeof(ct));
    ll x=0,y=0,z=0;
    for(i=0; i<3; i++)
        x += row(i);
    for(i=0; i<3; i++)
        y += col(i);
    z = dia();

    if((x+y+z)==0)
    {
        if(ace)
            cout << 2 <<endl;
        else
            cout << 1 << endl;
        return ;
    }

    if(x>1 || y>1 ||(z==2 && (x || y)))
    {
        cout <<3<<endl;
        return ;
    }
    if((x+y+z)==1 || (x+y+z)==2)
    {
        cout << 1 <<endl;
        return ;
    }

    ll ok=0;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(ct[i][j]>1)
            {
                if(ok)
                {
                    cout <<3<<endl;
                    return ;
                }
                ok = 1;
            }
        }
    }
    if(x || y || z || ace==0 || ok)
    {
        cout <<1<<endl;
        return ;
    }
    cout <<2<<endl;
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
