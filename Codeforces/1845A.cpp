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
    ll i,j,n,m,k,x;
    string s;
    cin >> n >> k >> x;
    if(k==1 || (n%k && k==2 && x==1))
    {
        cout <<"No\n";
        return;
    }
    if(x !=1 )
    {
        cout <<"Yes\n"<<n<<endl;
        for(i=0; i<n; i++)   cout <<"1 ";
        cout <<endl;
    }
    else
    {
        cout <<"Yes\n"<<n/2<<endl;
        for(i=1; i<(n/2); i++)   cout <<"2 ";
        if(n&1)   cout <<"3 ";
        else      cout <<"2 ";
        cout <<endl;
    }


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
