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


void Please_AC(ll tt)
{
    ll i,j,n,m=1e12+1,k,q;

    string s;
    cin >> s;
    n = s.size();
    ll zero[n+5],one[n+5];
    if(s[0]=='1')    one[0] = 1;
    else one[0] = 0;

    zero[n] = 0;
    for(i=n-1; i>=0; i--)
    {
        zero[i] = zero[i+1];
        if(s[i]=='0')  zero[i]++;
    }
    for(i=1; i<n; i++)
    {
        one[i] = one[i-1];
        if(s[i]=='1')   one[i]++;
    }
    ll ans = 1e18, temp = 0;
    for(i=0; i<n; i++)
    {
        if(s[i]=='1')
        {
            ll ct = zero[i]*m;
            if(i<n-1 && s[i+1]=='0')  ct--;
            ans = min(ans, temp+ct);
            temp += m;
        }
    }
    temp = 0;
    for(i=n-1; i>=0; i--)
    {
        if(s[i]=='0')
        {
            ll ct = one[i]*m;
            if(i && s[i-1]=='1')  ct--;
            ans = min(ans, temp+ct);
            temp += m;
        }
    }
    cout << ans <<endl;
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

