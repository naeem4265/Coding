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
    cin >> n >> m;
    ll d[n+5],a[n+5];
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        a[i] = d[i];
    }
    sort(a, a+n);
    for(j=0; j<n; j++)
    {
        if(m<a[j])   break;
        m -= a[j];
    }
    for(i=n-1,k=1; i>=0; i--,k++)
    {
        if(j>i || (i==j && j && d[i]<=(a[j-1]+m)))
        {
            cout <<k<<endl;
            return;
        }
    }
    cout << k <<endl;

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

