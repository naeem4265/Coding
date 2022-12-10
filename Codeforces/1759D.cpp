#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n >> m;
    ll nn = n;
    k = 1;
    while((k*10LL)<=m)  k*= 10LL;
    q = k*(m/k);

    while(n%10==0)  n/=10;

    if(n%2==0)
    {
        if((m/k)>4)
        {
            cout << 5*k*nn<<endl;
            return;
        }
        else
        {
            if(k>9)
                k /= 10;
            m = m/k;
            while(m%10!=0 && m%10!=5)   m--;

            cout << nn*k*m <<endl;
            return;
        }
    }
    if(n%10==5)
    {
        if((m/k)>1)
        {
            m = ((m/k)/2)*2;
            cout << m*k*nn<<endl;
            return;
        }
        else
        {
            if(k>9)
                k /= 10;
            m = m/k;
            while(m%2)   m--;

            cout << nn*k*m <<endl;
            return;
        }
    }
    if(m<10) {  cout << nn*m <<endl;   return;}
    cout << nn*k<<endl;

    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

