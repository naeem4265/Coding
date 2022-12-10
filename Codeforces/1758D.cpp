#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007

using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    ll limit = (n*2LL)*(n*2LL);
    ll sum =0;
    m = (n*n*2LL)/n;
    j = m-1; if(j&1) j--;
    k = j+1;
    for(i=3; i<=n; i++, j--,k++)
    {
        if(i&1){
            cout <<j<<" ";
            sum +=j;
        }
        else{
            cout <<k<<" ";
            sum += k;
        }
    }
    ll a = (limit-sum-(n*2LL))/2;
    cout <<a<<" "<<a+n*2LL <<endl;


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

