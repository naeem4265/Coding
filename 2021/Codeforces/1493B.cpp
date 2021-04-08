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
bool vis[12];

void solve(int t)
{
    ll i,j,n=5,m,k,h;
    string s;
    cin >> h >> m ;
    cin >> s;
    int g1,g2,p1,p2,h1,h2,m1,m2;
    g1 = h/10;
    g2 = h%10;
    p1 = m/10;
    p2 = m%10;

    h1 = s[0]-'0';
    h1 = h1*10+s[1]-'0';
    m1 = (s[3]-'0')*10+s[4]-'0';
    while(1)
    {
        if(m1>=m)
        {
            h1++;
            m1 = 0;
        }
        if(vis[m1/10] && vis[m1%10]) break;
        m1++;
    }
    while(1)
    {
        if(h1>=h)
        {
            cout <<"00:00\n";
            return;
        }
        if(vis[h1/10] && vis[h1%10]) break;
        h1++;
    }
    cout <<h1/10<<h1%10<<":"<<m1/10<<m1%10<<endl;
    return ;
    while(vis[m2]==0 || m2==p2)
    {
        if(m2>=9)
        {
            m1++;
            m2 = 0;
        }
        else
            m2++;
    }

    while(vis[m1]==0)
    {
        if(m1>=p1)
        {
            h2++;
            m1 = 0;
            break;
        }
        else
            m1++;
    }
    while(vis[h2]==0 || h2==g2)
    {
        if(h2==9)
        {
            h1++;
            h2 = m1 = m2 = 0;
        }
        else
            h2++;
    }

    while(vis[h1]==0)
    {
        if(h1>=g1)
        {
            h1++;
            h2 = m1 = m2 = 0;
            break;
        }
        else
            h1++;
    }
    if(h1>=g1)
    {
        cout <<"00:00\n";
        return ;
    }
    cout <<h1<<h2<<":"<<m1<<m2<<endl;
    return ;
    if(h1==3 || h1==4)
    {
        h1 = 5;
        h2= m1 = m2 = 0;
    }
    if(h1==6 || h1==7)
    {
        h1 = 8;
        h2= m1 = m2 = 0;
    }
    if(h2==3 || h2==4)
    {
        h1 = 5;
        m1 = m2 = 0;
    }
    if(h2==6 || h2==7)
    {
        h1 = 8;
        m1 = m2 = 0;
    }
    if(m1==3 || m1==4)
    {
        m1 = 5;
        m2 = 0;
    }
    if(m1==6 || m1==7)
    {
        m1 = 8;
        m2 = 0;
    }
    if(m2==3 || m2==4)
    {
        m2 = 5;
    }
    if(m1==6 || m1==7)
    {
        m1 = 8;
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    vis[0] = vis[1] = vis[2] = vis[5] = vis[8] = 1;
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
