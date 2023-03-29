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
ll l,r, num;
string ans;
bool check(ll from, ll to)
{
    ll n = l, m = r, pos = 1,ct = 0;
    ans = "";
    while(n)
    {
        char ch;
        if(ct>18LL)   return 0;
        ll d= n%10LL;
        n /= 10LL;
        if(d>=from && d<=to)
        {
            ch = '0'+d;
            ans = ch+ans;
        }
        else if(d<from)
        {
            ch = '0'+from;
            ans = ch+ans;
            for(ll i=1; i<ans.size(); i++)
            {
                ans[i] = ans[i-1];
            }
        }
        else
        {
            ch = '0'+from;
            ans = ch+ans;
            for(ll i=1; i<ans.size(); i++)
            {
                ans[i] = ans[i-1];
            }
            n++;
            ct++;
        }

        pos *= 10LL;
    }        //cout <<from<<" "<<to<<" "<<ans<<endl;
    m = 0;
    n = ans.size();
    for(ll i=n-1,pos=1; i>=0; i--, pos *= 10LL)
    {
        m += (ans[i]-'0')*pos;
    }
    num = m;
    if(m>=l && m<=r)    return 1;
    else   return 0;
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> l >> r;
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            if( check(j, min(j+i, 9LL)) )
            {
                cout << num <<endl;
                return;
            }
        }
    }
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
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

