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
    ll i,j,n,m,k,q,ct1,ct2,ct3;
    cin >> n >> m;
    cout <<"? 1 1"<<endl;
    cin >> ct1;
    cout <<"? "<<n<<" 1"<<endl;
    cin >> ct2;
    cout <<"? 1 "<<m<<endl;
    cin >> ct3;
    ll row,col;            //cout <<ct1<<" "<<ct2<<" "<<ct3<<endl;
    if(ct1+ct2==n-1)
    {
        row = n-ct2;
        col = m-ct3;
    }
    else if(ct1+ct3==m-1)
    {
        row = ct2;
        col = ct1;
    }
    else
    {
        row = ct3;
        col = ct2;
    }
    cout <<"! "<<row<<" "<<col<<endl;
    cout.flush();
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

