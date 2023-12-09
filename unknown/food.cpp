#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;
ll a,b,c;

bool food(ll i)
{
    i = i%7;
    if(i==0 || i==3)
    {
        if(b)
        {
            b--;
            return true;
        }
        return false;
    }
    if(i==1 || i==2 || i==5)
    {
        if(a)
        {
            a--;
            return true;
        }
        return false;
    }
    if(c)
    {
        c--;
        return true;
    }
    return false;
}

ll check(ll st)
{
    ll ct=0;
    for(ll i=st; i<7; i++)
    {
        if(food(i))
        {
            ct++;
        }
        else
        {
            return ct;
        }
    }
    ll mn = min({a/3,b/2,c/2});
    a -= mn*3;
    b -= mn*2;
    c -= mn*2;
    ct += mn*7;

    for(ll i=7; ; i++)
    {
        if(food(i))
        {
            ct++;
        }
        else
        {
            return ct;
        }
    }
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> a >> b >> c;
    ll t1=a,t2=b,t3=c;
    ll ans = 0;
    for(i=0; i<7; i++)
    {
        a = t1; b=t2; c=t3;
        ans = max(ans,check(i));   //cout << ans <<endl;
    }

    cout << ans << endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

