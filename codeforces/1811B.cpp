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
    ll x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >>y2;
    x1 = min(x1, n-x1+1);
    y1 = min(y1, n-y1+1);

    x2 = min(x2, n-x2+1);
    y2 = min(y2, n-y2+1);
    x1 = min(x1, y1);
    x2 = min(x2, y2);

   // x1 = min(x1, n-y1+1);
   // x2 = min(x2, n-y2+1);
    cout << abs(x2-x1)<<endl;
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

