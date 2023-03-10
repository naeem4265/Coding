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
    ll i,j,n,m,l,r;
    bool ok = 1;
    cin >> n;
    ll d[n+5][n+5];

    if(n&1)
    for(i=0,l=1,r=n*n; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if((i+j)&1)   d[i][j] = r--;
            else     d[i][j] = l++;
        }
    }
    else
    for(i=0,l=1,r=n*n; i<n; i++)
    {
        if(i&1)
        for(j=n-1; j>=0; j--)
        {
            if(ok)   { d[i][j] = l++; ok = 0;}
            else    {d[i][j] = r--; ok = 1;}
        }
        else
        for(j=0; j<n; j++)
        {
            if(ok)   { d[i][j] = l++; ok = 0;}
            else    {d[i][j] = r--; ok = 1;}
        }

    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
           cout <<d[i][j]<<" ";
        }
        cout <<endl;
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

