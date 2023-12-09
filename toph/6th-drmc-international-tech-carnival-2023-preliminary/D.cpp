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
    ll i,j,n,m,k,q;
    cin >> n >> k;
    string s;
    cin >> s;
    if(k==2)
    {
        ll ct=0, ctt=0;
        for(i=0; i<n; i++)
        {
            if(i&1 && s[i]=='A')  ct++;
            if(i%2==0 && s[i]=='B')  ct++;
        }

        for(i=0; i<n; i++)
        {
            if(i&1 && s[i]=='B')  ctt++;
            if(i%2==0 && s[i]=='A')  ctt++;
        }
        cout << min(ct, ctt) <<endl;
        return;
    }
    ll ct = 0;
    for(i=1; i<n; i++)
    {
        if(s[i]==s[i-1])
        {
            ct++;
            s[i] = '-';
        }
    }
    cout << ct <<endl;

    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

