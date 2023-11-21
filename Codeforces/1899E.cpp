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
    cin >> n;
    ll a[n+5];
    for(i=1; i<=n; i++)   cin >> a[i];
    a[0] = 1e9+5;
    for(i=n; i>0; i--){
        if(a[i] < a[i-1])   {
            for(j=i-2; j>0; j--){
                if(a[j]<=a[i]){
                    cout <<-1<<endl;
                    return;
                }
            }
            cout << i-1 <<endl;
            return ;
        }
    }
    cout << 0 <<endl;


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
