#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 108
using namespace std;
string s[limit];

struct st
{
    int x,y;
};
st temp;
vector<st> out;

void Set(int x,int y,bool ok)
{
    int i;           // cout <<x<<" "<<y<<endl;
    vector<int>X,Y,P,Q;
    if(s[x][y]=='1')
    {
        X.pb(x);
        Y.pb(y);
    }
    else
    {
        P.pb(x);
        Q.pb(y);
    }
    if(s[x][y+1]=='1')
    {
        X.pb(x);
        Y.pb(y+1);
    }
    else
    {
        P.pb(x);
        Q.pb(y+1);
    }
    if(s[x+1][y]=='1')
    {
        X.pb(x+1);
        Y.pb(y);
    }
    else
    {
        P.pb(x+1);
        Q.pb(y);
    }
    if(s[x+1][y+1]=='1')
    {
        X.pb(x+1);
        Y.pb(y+1);
    }
    else
    {
        P.pb(x+1);
        Q.pb(y+1);
    }
    if(X.size()==4)
    {
        for(i=0; i<3; i++)
        {
            temp.x=X[i]; temp.y=Y[i];
            s[X[i]][Y[i]]='0';
            out.pb(temp);
        }
        if(ok)
            Set(x,y,1);
    }
    if(X.size()==3)
    {
        for(i=0; i<3; i++)
        {
            temp.x=X[i]; temp.y=Y[i];
            s[X[i]][Y[i]]='0';
            out.pb(temp);
        }
    }
    if(X.size()==2 || X.size()==1)
    {
        temp.x=X[0]; temp.y=Y[0];
        out.pb(temp);
        s[X[0]][Y[0]]='0';
        for(i=0; i<2; i++)
        {
            temp.x=P[i]; temp.y=Q[i];
            s[P[i]][Q[i]]='1';
            out.pb(temp);
        }
        if(ok)
            Set(x,y,1);
    }
}

void solve(int t)
{
    int i,j,n,m,k;
    out.clear();
    cin >> n >> m;
    for(i=0; i<n; i++)
    {
        cin >> s[i];
    }
    if(n&1 && m&1 && s[0][0]=='1')
        Set(0,0,0);
    if(n&1)
    {
        j = (m&1)?1:0;
        for(; j<m; j+=2)
        {
            if(s[0][j]=='1' && s[0][j+1]=='1')
            {
                temp.x=0; temp.y=j;
                s[0][j]=(s[0][j]=='1')?'0':'1';
                out.pb(temp);
                temp.y=j+1;
                s[0][j+1]=(s[0][j+1]=='1')?'0':'1';
                out.pb(temp);
                temp.x=1;
                out.pb(temp);
                s[1][j+1]=(s[1][j+1]=='1')?'0':'1';
            }
            else if(s[0][j]=='1')
            {
                temp.x=0; temp.y=j;
                s[0][j]=(s[0][j]=='1')?'0':'1';
                out.pb(temp);
                temp.x=1;
                s[1][j]=(s[1][j]=='1')?'0':'1';
                out.pb(temp);
                temp.y=j+1;
                s[1][j+1]=(s[1][j+1]=='1')?'0':'1';
                out.pb(temp);
            }
            else if(s[0][j+1]=='1')
            {
                temp.x=0; temp.y=j+1;
                s[0][j+1]=(s[0][j+1]=='1')?'0':'1';
                out.pb(temp);
                temp.x=1;
                s[1][j+1]=(s[1][j+1]=='1')?'0':'1';
                out.pb(temp);
                temp.y=j;
                s[1][j]=(s[1][j]=='1')?'0':'1';
                out.pb(temp);
            }
        }
    }
    if(m&1)
    {
        i = (n&1)?1:0;
        for(; i<n; i+=2)
        {
            if(s[i][0]=='1' && s[i+1][0]=='1')
            {
                temp.x=i; temp.y=0;
                s[i][0]=(s[i][0]=='1')?'0':'1';
                out.pb(temp);
                temp.x=i+1;
                s[i+1][0]=(s[i+1][0]=='1')?'0':'1';
                out.pb(temp);
                temp.y=1;
                s[i+1][1]=(s[i+1][1]=='1')?'0':'1';
                out.pb(temp);
            }
            else if(s[i][0]=='1')
            {
                temp.x=i; temp.y=0;
                out.pb(temp);
                temp.y=1;
                s[i][1]=(s[i][1]=='1')?'0':'1';
                out.pb(temp);
                temp.x=i+1;
                s[i+1][1]=(s[i+1][1]=='1')?'0':'1';
                out.pb(temp);
            }
            else if(s[i+1][0]=='1')
            {
                temp.x=i+1; temp.y=0;
                out.pb(temp);
                temp.y=1;
                s[i+1][1]=(s[i+1][1]=='1')?'0':'1';
                out.pb(temp);
                temp.x=i;
                s[i][1]=(s[i][1]=='1')?'0':'1';
                out.pb(temp);
            }
        }
    }
    i = (n&1)?1:0;
    for(; i<n; i+=2)
    {
        j = (m&1)?1:0;
        for(; j<m; j+=2)
        {
            if(s[i][j]=='1' || s[i][j+1]=='1' || s[i+1][j]=='1' || s[i+1][j+1]=='1')
                Set(i,j,1);
        }
    }
    cout <<out.size()/3<<endl;
    for(i=2; i<out.size(); i+=3)
    {
        cout <<1+out[i-2].x<<" "<<1+out[i-2].y<<" ";
        cout <<1+out[i-1].x<<" "<<1+out[i-1].y<<" ";
        cout <<1+out[i].x<<" "<<1+out[i].y<<endl;
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

