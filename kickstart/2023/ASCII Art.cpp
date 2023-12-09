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
    ll l=1, h=1e9,x=0;
    while(l<=h)
    {
        m = (l+h)/2;
        if(n>(26LL*m*(m+1)/2LL))
        {
            x = m;
            l = m+1;
        }
        else
            h = m-1;       //cout <<l<< " "<<h<<" "<<26LL*m*(m+1)/2LL<<" "<<x<<endl;
    }
    n -= 26LL*x*(x+1)/2LL;
    x++;
    char ch = 'A' + (n-1)/x;  // cout <<x<<" "<<n <<" "<<(n-1)/x<<endl;
    cout <<"Case #"<<tt<<": " << ch <<endl;
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

