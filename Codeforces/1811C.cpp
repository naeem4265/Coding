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
    cin >> n;
    ll a[n+5];
    a[0] = 0;
    for(i=1; i<n; i++)    cin >> a[i];
    for(i=1; i<n; i++)
    {
        if(a[i-1]>a[i])
        {
            if( i>1 && a[i-2]==a[i-1] )
            {
                a[i-1] = a[i];  continue;
            }
            for(j=0; j<i; j++)
                a[j] = a[j+1];
        }
    }
    //if(a[0]==0)   swap(a[0], a[1]);
    for(i=0; i<n; i++)    cout <<a[i]<<" ";
    cout <<endl;

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

