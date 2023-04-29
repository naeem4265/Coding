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
    string s[n+5];
    for(i=0; i<n; i++)   cin >> s[i];
    bool ele[n+5];
    memset(ele, 0, sizeof(ele));

    for(i=0; i<k; i++)
    {
        for(j=0; j<n; j++)
        {
            if(s[j][i] != s[0][i])   ele[j] = 1;
        }
    }
    ll ct = 0;
    for(j=0; j<n; j++)   if(ele[j]==0)  ct++;
    cout <<ct<<endl;

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

