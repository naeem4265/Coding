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
    string s;
    cin >> n >> q;
    ll pre = n-1;
    ll a[q+5];
    for(i=1; i<=q; i++)   cin >> a[i];
    for(i=1; i<n; i++)  cout <<i<<" "<<i+1<<endl;
    for(i=1; i<=q; i++){
        if(pre==a[i])   cout <<-1<<" "<<-1<<" "<<-1<<endl;
        else
        {
            cout << n <<" "<<pre<<" "<<a[i]<<endl;
            pre = a[i];
        }
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
