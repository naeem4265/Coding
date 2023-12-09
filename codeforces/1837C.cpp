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
    ll i,j,n,m,k,l;
    string s;
    cin >> s;
    n = s.size();
    for(i=0; i<n; i++)
    {
        if(s[i]=='?')   continue;
        for(l=i-1; l>=0; l--)
        {
            if(s[l]!='?')   break;
            s[l] = s[i];
        }
        l = i+1;
    }    // cout <<s<<endl;
    for(i=n-1,l=n-1; i>=0; i--)
    {
        if(s[i]=='?')   continue;
        for(l=i+1; l<n; l++)
        {
            if(s[l]!='?')   break;
            s[l] = s[i];
        }
    }
    if(s[0]=='?')
        for(i=0; i<n; i++)  s[i] = '1';
    cout << s<<endl;

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

