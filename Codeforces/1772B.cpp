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
ll d[5];
bool check()
{
    if(d[0]<d[1] && d[0]<d[3] && d[1]<d[2] && d[3]<d[2])  return 1;
    return 0;
}

void Best_of_LUCK_MESSI(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> d[0] >> d[1] >> d[3] >> d[2];
    if(check())
    {
        cout << "YES\n";
        return;
    }
    m = d[3];
    d[3] = d[2];
    d[2] = d[1];
    d[1] = d[0];
    d[0] = m;
    if(check())
    {
        cout << "YES\n";
        return;
    }
    m = d[3];
    d[3] = d[2];
    d[2] = d[1];
    d[1] = d[0];
    d[0] = m;

    if(check())
    {
        cout << "YES\n";
        return;
    }
    m = d[3];
    d[3] = d[2];
    d[2] = d[1];
    d[1] = d[0];
    d[0] = m;

    if(check())
    {
        cout << "YES\n";
        return;
    }
    m = d[3];
    d[3] = d[2];
    d[2] = d[1];
    d[1] = d[0];
    d[0] = m;

    if(check())
    {
        cout << "YES\n";
        return;
    }
    m = d[3];
    d[3] = d[2];
    d[2] = d[1];
    d[1] = d[0];
    d[0] = m;

    if(check())
    {
        cout << "YES\n";
        return;
    }
    m = d[3];
    d[3] = d[2];
    d[2] = d[1];
    d[1] = d[0];
    d[0] = m;

    if(check())
    {
        cout << "YES\n";
        return;
    }
    m = d[3];
    d[3] = d[2];
    d[2] = d[1];
    d[1] = d[0];
    d[0] = m;
    cout << "NO\n";
    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    cin >> tt;

    for(t=1; t<=tt; t++)
        Best_of_LUCK_MESSI(t);

    return 0;
}

